/*
Copyright 2020 Dimitris Mantzouranis
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H
#ifdef BLUETOOTH_ENABLE
#include "iton_bt.h"
#include "outputselect.h"
#endif

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_HOME, KC_END, KC_PGUP, KC_PGDN, RGB_MOD, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_NO, TG(2), KC_PSLS, KC_PAST, KC_PMNS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_PPLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_RSFT, KC_1, KC_2, KC_UP, KC_3, KC_PENT, KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_RALT, MO(1), MACRO(0), KC_0, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO),

[_LAYER1] = LAYOUT(BT_PAIR, KC_SLCK, KC_PAUS, KC_APP, KC_TRNS, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_INS, KC_PSCR, KC_TRNS, KC_TRNS, KC_SLEP, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NLCK, KC_TRNS, KC_TRNS, RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAI, KC_TRNS, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, MO(1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO),

[_LAYER2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, TG(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSG(KC_F), LAG(KC_H), KC_INS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RSFT(KC_N), KC_DEL, KC_END, KC_PGDN, RSG(KC_V), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RCTL(KC_A), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, RCTL(KC_P8), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO),

[_LAYER3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WWW_HOME, KC_WWW_BACK, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WWW_HOME, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, S(KC_9), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO) 

};

void iton_bt_connection_successful() {
    set_output(OUTPUT_BLUETOOTH);
}

bool dip_switch_update_user(uint8_t index, bool active){
  switch(index){
    case 0:
        #ifdef BLUETOOTH_ENABLE
        if (active) {
            set_output(OUTPUT_NONE);
        } else {
            set_output(OUTPUT_USB);
        }
        #endif
      break;
    case 1:
      if(active){ // Win/Android mode
// do stuff
      }
      else{ // Mac/iOS mode
// do stuff
      }
      break;
  }
  return true;
}
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
