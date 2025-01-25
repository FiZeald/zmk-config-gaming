# zmk-config

## Layout and layers

1. `default` layer
    Based on [Thomas Lundqvist's sv_dvorak](https://tlundqvist.org/sv_dvorak/),
    available on Linux via XKB layout as "Swedish (Dvorak, intl.)"
  
    Relies on Home-row-modifier for Ctrl, Shift, Alt and Meta
  
    Layout done in FW, Linux should be configured to use "English (intl., with AltGr dead keys)"
  
2. `default_sv` layer
    Same as default layer, but does one additional translation step to allow running with "Swedish (Dvorak, intl.)" layout. Can be useful for LUKS key input, login-screens etc. 

    Any layer with the suffix `_sv` follows this principle.

3. `right` layer
    * left hand: Numpad 
    * right hand: Navigation

4. `left` layer
    Symbols, mirrored and weighted for programming languages I use

5. `function` layer
    * left hand: Same as numpad, but the F-keys
    * right hand: Brightness, media control and volume

6. `Gaming QWER` layer
    * left hand: Gaming layer made for League of Legends
      
7. `Gaming WASD` layer
    * left hand: Gaming layer made for FPS and various games movement used by W A S D
      
8. `mouse` layer
    * left hand: Mouse button, home-row modifiers available too
    * right hand: Scroll and movement
  
9. `mgmt` layer
    Handling of Bluetooth profiles, bootloader, reset etc. 

## Keyboard

Using [ZMK](https://zmk.dev) on a [Sweep](https://github.com/davidphilipbarr/Sweep)

34 keys total, 2 keys per thumb

![Keymap Representation](./keymap-drawer/cradio.svg?raw=true "Keymap Representation")
