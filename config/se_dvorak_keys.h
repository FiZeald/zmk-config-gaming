/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#include <dt-bindings/zmk/keys.h>

// Resources:
// https://github.com/zmkfirmware/zmk/blob/main/app/include/dt-bindings/zmk/keys.h
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_swedish.h
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_swedish_osx_iso.h
// https://github.com/denniskempin/dubu36/blob/main/generate_keymap.py
// https://github.com/dmattsson/lily58/blob/main/config/se_keys.h


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ' │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ [ │ ] │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Å │ , │ . │ P │ Y │ F │ G │ C │ R │ L │ / │ = │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ O │ E │ U │ I │ D │ H │ T │ N │ S │ - │ : │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ Ö │ Ä │ Q │ J │ K │ X │ B │ M │ W │ V │ Z │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */


// Row 1
#define SVD_SQT GRAVE  // '
#define SVD_1    N1    // 1
#define SVD_2    N2    // 2
#define SVD_3    N3    // 3
#define SVD_4    N4    // 4
#define SVD_5    N5    // 5
#define SVD_6    N6    // 6
#define SVD_7    N7    // 7
#define SVD_8    N8    // 8
#define SVD_9    N9    // 9
#define SVD_0    N0    // 0
#define SVD_LBKT MINUS // [
#define SVD_RBKT EQUAL // ]

// Row 2
#define SVD_ARING Q   // Å
#define SVD_COMM W    // ,
#define SVD_DOT  E    // .
#define SVD_P    R    // P
#define SVD_Y    T    // Y
#define SVD_F    Y    // F
#define SVD_G    U    // G
#define SVD_C    I    // C
#define SVD_R    O    // R
#define SVD_L    P    // L
#define SVD_FSLH LBKT // /
#define SVD_EQUAL RBKT // =

// Row 3
#define SVD_A    A    // A
#define SVD_O    S    // O
#define SVD_E    D    // E
#define SVD_U    F    // U
#define SVD_I    G    // I
#define SVD_D    H    // D
#define SVD_H    J    // H
#define SVD_T    K    // T
#define SVD_N    L    // N
#define SVD_S    SEMI // S
#define SVD_MINUS SQT // -
#define SVD_SEMI NON_US_HASH // ;

// Row 4
#define SVD_ODIA NON_US_BACKSLASH // Ö
#define SVD_ADIA Z    // Ä
#define SVD_Q    X    // Q
#define SVD_J    C    // J
#define SVD_K    V    // K
#define SVD_X    B    // X
#define SVD_B    N    // B
#define SVD_M    M    // M
#define SVD_W   COMMA // W
#define SVD_V   DOT   // V
#define SVD_Z   SLASH // Z


/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ ! │ " │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ { │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │ < │ > │   │   │   │   │   │   │   │ ? │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ _ │ : │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SVD_TILD LS(SVD_SQT)  // ~
#define SVD_EXLM LS(SVD_1)    // !
#define SVD_DQUO LS(SVD_2)    // "
#define SVD_HASH LS(SVD_3)    // #
#define SVD_CURR LS(SVD_4)    // $
#define SVD_PERC LS(SVD_5)    // %
#define SVD_CIRC LS(SVD_6)    // ^
#define SVD_AMPR LS(SVD_7)    // &
#define SVD_ASTR LS(SVD_8)    // *
#define SVD_LPRN LS(SVD_9)    // (
#define SVD_RPRN LS(SVD_0)    // )
#define SVD_LBRC LS(SVD_LBKT)// {
#define SVD_RBRC LS(SVD_RBKT)// }


// Row 2
#define SVD_LESS LS(SVD_COMM)  // <
#define SVD_GREATER LS(SVD_DOT)// >
#define SVD_QMARK LS(SVD_FSLH) // ?
#define SVD_PLUS LS(SVD_EQUAL) // +
// Row 3
#define SVD_UNDER LS(SVD_MINUS) // :
#define SVD_COLON LS(SVD_SEMI) // :

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ◌̀ │   │ @ │   │   │ € │ ◌̂ │   │   │ ◌̆ │ ◌̊ │   │ ◌̃ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ◌́ │ ◌̧ │ ◌̇ │   │   │   │   │   │   │   │ ◌̡ │ ◌̋ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │ € │   │   │   │   │   │   │ ß │ | │ \ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ◌̈ │ ◌̀ │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SVD_GRAVE RA(SVD_SQT)    // ` (Grave)
#define SVD_AT   RA(SVD_2)      // @
#define SVD_EURO RA(SVD_5)      // €
#define SVD_CIRC_D RA(SVD_6)    // ◌̂^ (dead) (Circumflex)
#define SVD_BREVE_D RA(SVD_9)   // ◌̆  (dead) (Breve)
#define SVD_ARING_D RA(SVD_0)   // ◌̊  (dead) (Above Ring)
#define SVD_TILD_D RA(SVD_RBKT) // ◌̃  (dead) (Tilde)
// Row 2
#define SVD_ACUT_D RA(SVD_ARING) // ◌́  (dead) (Acute)
#define SVD_CEDI_D RA(SVD_COMM) // ◌̧  (dead) (Cedilla)
#define SVD_ADOT_D RA(SVD_DOT) // ◌̇  (dead) (Above Dot)
#define SVD_HOOK_D RA(SVD_FSLH) // ◌̡ (dead) (Hook)
#define SVD_DACUTE_D RA(SVD_EQUAL) // ◌̋  (dead) (Double Acute)
// Row 3
#define SVD_EURO2 RA(SVD_E) // €
#define SVD_SSHARP RA(SVD_S) // ß
#define SVD_BAR RA(SVD_MINUS) // | (Bar)
#define SVD_BSLH RA(SVD_SEMI) // \ (Backslash)

// Row 4
#define SVD_DIAR_D RA(SVD_ODIA) // ◌̈  (dead) (Diaresis)
#define SVD_GRAVE_D RA(SVD_ADIA) // ◌̀  (dead) (Grave)
#define SVD_MICR RA(SVD_M)    // µ