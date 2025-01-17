#!/usr/bin/env fish
. venv/bin/activate.fish

pipx upgrade keymap-drawer

keymap -c keymap_drawer.config.yaml parse -z config/cradio.keymap >keymap-drawer/cradio.yaml ; keymap -c keymap_drawer.config.yaml draw keymap-drawer/cradio.yaml >keymap-drawer/cradio.svg
