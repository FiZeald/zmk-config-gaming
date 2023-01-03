#!/usr/bin/env bash

function get_zmk-viewer() {
  local DIST=""
  local EXT=""
  local FILENAME=""
  local KERNEL=""
  local MACHINE=""
  local TMP_DIR=""
  local URL=""
  local TAG=""
  local VER=""

  # Get the current released tag_name
  TAG=$(curl -sL https://api.github.com/repos/mrmarble/zmk-viewer/releases \
        | grep tag_name | head -n1 | cut -d'"' -f4)

  if [ -n "${TAG}" ]; then
    URL="https://github.com/MrMarble/zmk-viewer/releases/download/${TAG}"
    VER="${TAG:1}"
  else
    echo "ERROR! Could not retrieve the current zmk-viewer version number."
    exit 1
  fi

  # Get kernel name and machine architecture.
  KERNEL=$(uname -s)
  MACHINE=$(uname -m)

  # Determine the target distrubution
  if [ "${KERNEL}" == "Linux" ]; then
    EXT="tar.gz"
    if [ "${MACHINE}" == "i386" ]; then
      DIST="linux-386"
    elif [ "${MACHINE}" == "x86_64" ]; then
      DIST="linux-amd64"
    elif [ "${MACHINE}" == "armv6l" ]; then
      DIST="linux-armv6"
    elif [ "${MACHINE}" == "armv7l" ]; then
      DIST="linux-armv7"
    elif [ "${MACHINE}" == "aarch64" ]; then
      DIST="linux-arm64"
    fi
  elif [ "${KERNEL}" == "Darwin" ]; then
    EXT="zip"
    if [ "${MACHINE}" == "x86_64" ]; then
      DIST="darwin-amd64"
    elif [ "${MACHINE}" == "arm64" ]; then
      DIST="darwin-arm64"
    fi
  elif [ "${KERNEL}" == "FreeBSD" ]; then
    EXT="tar.gz"
    if [ "${MACHINE}" == "i386" ]; then
      DIST="freebsd-386"
    elif [ "${MACHINE}" == "x86_64" ]; then
      DIST="freebsd-amd64"
    elif [ "${MACHINE}" == "armv6l" ]; then
      DIST="freebsd-armv6"
    elif [ "${MACHINE}" == "armv7l" ]; then
      DIST="freebsd-armv7"
    fi
  else
    echo "ERROR! ${KERNEL} is not a supported platform."
    exit 1
  fi

  # Was a known distribution detected?
  if [ -z "${DIST}" ]; then
    echo "ERROR! ${MACHINE} is not a supported architecture."
    exit 1
  fi

  # Derive the filename
  FILENAME="zmk-viewer-${VER}-${DIST}.${EXT}"

  echo " - Downloading ${URL}/${FILENAME}"
  TMP_DIR=$(mktemp --directory)
  curl -sLo "${TMP_DIR}/${FILENAME}" "${URL}/${FILENAME}"

  echo " - Unpacking ${FILENAME}"
  if [ "${EXT}" == "zip" ]; then
    unzip -qq -o "${TMP_DIR}/${FILENAME}" -d "${TMP_DIR}"
  elif [ "${EXT}" == "tar.gz" ]; then
    tar -xf "${TMP_DIR}/${FILENAME}" --directory "${TMP_DIR}"
  else
    echo "ERROR! Unexpected file extension."
    exit 1
  fi

  echo " - Placing zmk-viewer in $PWD"
  mv "${TMP_DIR}/zmk-viewer-${VER}-${DIST}/zmk-viewer" .
  chmod +x zmk-viewer

  echo " - Cleaning up"
  rm -rf "${TMP_DIR}"
  echo -en " - "
  ./zmk-viewer --version

}

echo "zmk-viewer scripted install"

get_zmk-viewer
