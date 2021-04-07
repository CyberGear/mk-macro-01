/* Copyright 2021 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// https://codepen.io/mvaneijgen/full/LYEVQXp

// enum custom_keycodes {
//     MAC_1 = SAFE_RANGE,
// };

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//     case MAC_1:
//         if (!record->event.pressed) {
//             register_code16(KC_RCTRL);
//             register_code16(KC_RGUI);
//             register_code16(KC_RALT);
//             tap_code16(KC_KP_1);
//             unregister_code16(KC_RALT);
//             unregister_code16(KC_RGUI);
//             unregister_code16(KC_RCTRL);
//         }
//         break;
//         return false;
//     }
//     return true;
//

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_P1,  KC_P3,  KC_P3, KC_P4, KC_P5,
        MO(1), MO(1), KC_P6, KC_P7, KC_P8
    ),
    [1] = LAYOUT(
        RESET,   DEBUG,      KC_A, _______, _______,
        _______, _______, _______, _______, _______
    )
};

// void keyboard_post_init_user(void) {
//   // Customise these values to desired behaviour
//   debug_enable=true;
// //   debug_matrix=true;
// //   debug_keyboard=true;
//   //debug_mouse=true;
// }
