#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] =	LAYOUT_alice67_rgb(
		KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL,
		LSG(KC_LEFT), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		LSG(KC_RIGHT), LT(2, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,
		KC_LCTL, KC_LGUI, KC_SPC, KC_LALT, KC_SPC, MO(1), KC_LEFT, KC_DOWN, KC_RGHT),

	[1] =	LAYOUT_alice67_rgb(
		RGB_TOG, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS,
		RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RCS(KC_F10), LAG(KC_T), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, RGB_HUD, KC_TRNS,
		RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, RCS(KC_F9), RCS(KC_F), KC_TRNS, KC_TRNS, LAG(KC_J), LAG(KC_K), KC_TRNS, RGB_SAI, RGB_SAD, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, LGUI(KC_F4), LAG(KC_V), LAG(KC_B), KC_TRNS, KC_MUTE, KC_TRNS, RGB_VAI, RGB_VAD, KC_TRNS, KC_VOLU,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPI, KC_VOLD, RGB_SPD),

	[2] =	LAYOUT_alice67_rgb(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, AG_LSWP, AG_LNRM, KC_TRNS, QK_BOOTLOADER,
		DM_REC1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		DM_PLY1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_LALT, KC_TRNS, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[3] =	LAYOUT_alice67_rgb(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_LALT, KC_TRNS, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

// void matrix_init_user(void) {
    // rgb_matrix_mode_(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
    // rgb_matrix_mode_(layer1);
// }

// void matrix_scan_user(void) {
//
// }

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51},
  {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,NO_LED},
  {35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22,NO_LED,NO_LED},
  {NO_LED,21,20,19,18,17,16,15,14,13,12,11,10,9,NO_LED,NO_LED},
  {NO_LED,8, NO_LED,7, NO_LED,6, 5, 4,NO_LED, 3, NO_LED,NO_LED,2, 1, 0,NO_LED}
}, {
  // LED Index to Physical Position
  {128,64},{112,64},{96,64},{80,64},{64,64},{48,64},{32,64},{16,64},{0,64},{192,48},{176,48},{160,48},{144,48},{128,48},{112,48},{96,48},{80,48},{64,48},{48,48},{32,48},{16,48},{0,48},{208,32},{192,32},{176,32},{160,32},{144,32},{128,32},{112,32},{96,32},{80,32},{64,32},{48,32},{32,32},{16,32},{0,32},{224,16},{208,16},{192,16},{176,16},{160,16},{144,16},{128,16},{112,16},{96,16},{80,16},{64,16},{48,16},{32,16},{16,16},{0,16},{240,0},{224,0},{208,0},{192,0},{176,0},{160,0},{144,0},{128,0},{112,0},{96,0},{80,0},{64,0},{48,0},{32,0},{16,0},{0,0}
}, {
  // LED Index to Flag
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,1,1
} };


// void suspend_power_down_user(void) {
//     rgb_matrix_set_suspend_state(true);
// }

// void suspend_wakeup_init_user(void) {
//     rgb_matrix_set_suspend_state(false);
// }

// void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//         switch(get_highest_layer(layer_state|default_layer_state)) {
//             case 0:
//                 rgb_matrix_set_color(65, RGB_BLUE);
//                 break;
//             case 1:
//                 rgb_matrix_set_color(64, RGB_YELLOW);
//                 break;
//             case 2:
//                 rgb_matrix_set_color(63, RGB_YELLOW);
//                 break;
//             case 3:
//                 rgb_matrix_set_color(62, RGB_YELLOW);
//                 break;
//             default:
//                 break;
//         }
// }
