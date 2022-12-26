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
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_SECT GRAVE  // §
#define SE_1    N1    // 1
#define SE_2    N2    // 2
#define SE_3    N3    // 3
#define SE_4    N4    // 4
#define SE_5    N5    // 5
#define SE_6    N6    // 6
#define SE_7    N7    // 7
#define SE_8    N8    // 8
#define SE_9    N9    // 9
#define SE_0    N0    // 0
#define SE_PLUS MINUS // +
#define SE_ACUT EQUAL  // ´ (dead)

// Row 2
#define SE_Q    Q    // Q
#define SE_W    W    // W
#define SE_E    E    // E
#define SE_R    R    // R
#define SE_T    T    // T
#define SE_Y    Y    // Y
#define SE_U    U    // U
#define SE_I    I    // I
#define SE_O    O    // O
#define SE_P    P    // P
#define SE_ARNG LBKT // Å
#define SE_AA   SE_ARNG
#define SE_DIAE RBKT // ¨ (dead)

// Row 3
#define SE_A    A    // A
#define SE_S    S    // S
#define SE_D    D    // D
#define SE_F    F    // F
#define SE_G    G    // G
#define SE_H    H    // H
#define SE_J    J    // J
#define SE_K    K    // K
#define SE_L    L    // L
#define SE_ODIA SEMI // Ö
#define SE_OE   SE_ODIA
#define SE_ADIA SQT // Ä
#define SE_AE   SE_ADIA
#define SE_QUOT NON_US_HASH // '

// Row 4
#define SE_LABK NON_US_BACKSLASH // <
#define SE_Z    Z    // Z
#define SE_X    X    // X
#define SE_C    C    // C
#define SE_V    V    // V
#define SE_B    B    // B
#define SE_N    N    // N
#define SE_M    M    // M
#define SE_COMM COMMA // ,
#define SE_DOT  DOT  // .
#define SE_MINS SLASH // -



/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_HALF LS(SE_SECT) // ½
#define SE_EXLM LS(SE_1)    // !
#define SE_DQUO LS(SE_2)    // "
#define SE_HASH LS(SE_3)    // #
#define SE_CURR LS(SE_4)    // ¤
#define SE_PERC LS(SE_5)    // %
#define SE_AMPR LS(SE_6)    // &
#define SE_SLSH LS(SE_7)    // /
#define SE_LPRN LS(SE_8)    // (
#define SE_RPRN LS(SE_9)    // )
#define SE_EQL  LS(SE_0)    // =
#define SE_QUES LS(SE_PLUS) // ?
#define SE_GRV  LS(SE_ACUT) // ` (dead)


// Row 2
#define SE_CIRC LS(SE_DIAE) // ^ (dead)
// Row 3
#define SE_ASTR LS(SE_QUOT) // *
// Row 4
//#define SE_RABK LS(SE_LABK) // >
#define SE_SCLN LS(SE_COMM) // ;
#define SE_COLN LS(SE_DOT)  // :
#define SE_UNDS LS(SE_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_AT   RA(SE_2)    // @
#define SE_PND  RA(SE_3)    // £
#define SE_DLR  RA(SE_4)    // $
#define SE_EURO RA(SE_5)    // €
#define SE_LCBR RA(SE_7)    // { win
//#define SE_LCBR LS(RA(SE_8))    // { mac
#define SE_LBRC RA(SE_8)    // [
#define SE_RBRC RA(SE_9)    // ]
#define SE_RCBR RA(SE_0)    // } win
//#define SE_RCBR LS(RA(SE_9))    // } mac
#define SE_BSLS RA(SE_PLUS) // (backslash) win
//#define SE_BSLS LS(RA(SE_7)) // (backslash) mac
// Row 2
#define SE_TILD RA(SE_DIAE) // ~ (dead)
// Row 4
#define SE_PIPE RA(SE_LABK) // | win
//#define SE_PIPE RA(SE_7) // | mac
#define SE_MICR RA(SE_M)    // µ