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
 * │      │ A │ O │ E │ U │ I │ D │ H │ T │ N │ S │ - │ ; │    │
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
#define SVD_UNDER LS(SVD_MINUS) // _
#define SVD_COLON LS(SVD_SEMI) // :

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ ¡ │ @ │ ³ │ ¤ │ € │ ◌̂ │ ½ │ ¾ │ ‘ │ ’ │ « │ » │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ◌́ │ ç │ ◌̇ │ ö │ ü │ f │ g │ © │ ® │ ø │ ¿ │ = │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ á │ ó │ é │ ú │ í │ ð │ h │ þ │ ñ │ ß │ | │ \ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ◌̈ │ ◌̀ │ ä │ j │ œ │ x │ b │ µ │ å │ v │ æ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SVD_GRAVE RA(SVD_SQT)    // ` (Grave)
#define SVD_EXLM_INV RA(SVD_1)   // ¡
#define SVD_AT   RA(SVD_2)       // @
#define SVD_CUBED RA(SVD_3)      // ³
#define SVD_CURR_ANY RA(SVD_4)   // ¤
#define SVD_EURO RA(SVD_5)       // €
#define SVD_CIRC_D RA(SVD_6)     // ◌̂^ (dead) (Circumflex)
#define SVD_ONE_HALF RA(SVD_7)   // ½
#define SVD_THREE_QUARTERS RA(SVD_8) // ¾
#define SVD_SQTL RA(SVD_9)       // ‘ (Single Quote Left)
#define SVD_SQTR RA(SVD_0)       // ’ (Single Quote Right)
#define SVD_GUILLEMOTL RA(SVD_LBKT) // « (Guillemot)
#define SVD_GUILLEMOTR RA(SVD_RBKT) // » (Guillemot)
// Row 2
#define SVD_ACUT_D RA(SVD_ARING) // ◌́  (dead) (Acute)
#define SVD_CCEDI RA(SVD_COMM)   // ç (C Cedilla)
#define SVD_ADOT_D RA(SVD_DOT)   // ◌̇  (dead) (Above Dot)
#define SVD_ODIA2 RA(SVD_P)      // ö
#define SVD_UDIA RA(SVD_Y)       // ü
// #define SVD_ RA(SVD_F)        // Plain F
// #define SVD_ RA(SVD_G)        // Plain G
#define SVD_COPYR RA(SVD_C)      // © (Copyright)
#define SVD_REG_TM RA(SVD_R)     // ® (Registered Trademark)
#define SVD_SLASHED_O RA(SVD_L)  // ø (O with slash)
#define SVD_QMARK_INV RA(SVD_FSLH) // ¿
// #define SVD_ RA(SVD_EQUAL) // Plain =
// Row 3
#define SVD_AACUTE RA(SVD_A)     // á (A acute)
#define SVD_OACUTE RA(SVD_O)     // ó (O acute)
#define SVD_EACUTE RA(SVD_E)     // é (E acute)
#define SVD_UACUTE RA(SVD_U)     // ú (U acute)
#define SVD_IACUTE RA(SVD_I)     // í (I acute)
#define SVD_ETH RA(SVD_D)        // ð (Eth) 
// #define SVD_ RA(SVD_H)        // Plain H
#define SVD_THORN RA(SVD_T)      // þ (Thorn)
#define SVD_NTILDE RA(SVD_N)     // ñ (Tilde over N, Virgulilla)
#define SVD_SSHARP RA(SVD_S)     // ß (Eszett, sharp S)
#define SVD_BAR RA(SVD_MINUS)    // | (Bar)
#define SVD_BSLH RA(SVD_SEMI)    // \ (Backslash)
// Row 4
#define SVD_DIAR_D RA(SVD_ODIA)  // ◌̈  (dead) (Diaresis)
#define SVD_GRAVE_D RA(SVD_ADIA) // ◌̀  (dead) (Grave)
// #define SVD_ RA(SVD_Q)        // Plain Ä
// #define SVD_ RA(SVD_J)        // Plain J
#define SVD_ETHEL RA(SVD_K)      // œ (Ethel) 
// #define SVD_ RA(SVD_X)        // Plain X
// #define SVD_ RA(SVD_B)        // Plain B
#define SVD_MICR RA(SVD_M)       // µ (Mu)
// #define SVD_ RA(SVD_W)        // Moved Å
// #define SVD_ RA(SVD_V)        // Plain V
#define SVD_ASH RA(SVD_Z)        // æ (Ash) 
