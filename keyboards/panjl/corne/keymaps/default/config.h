/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#pragma once

#define MATRIX_ROW_PINS \
    { D4, C6, D7, E6 }

// wiring of each half
#define MATRIX_COL_PINS \
    { F4, F5, F6, F7, B1, B3 }
// #define MATRIX_COL_PINS { B2, B3, B1, F7, F6, F5, F4 } //uncomment this line and comment line above if you need to reverse left-to-right key order

#define SOFT_SERIAL_PIN D2

#ifdef POINTING_DEVICE_ENABLE
    #define ANALOG_JOYSTICK_X_AXIS_PIN  B4
    #define ANALOG_JOYSTICK_Y_AXIS_PIN  B5
    #define ANALOG_JOYSTICK_CLICK_PIN  E6
#endif

// #define COMBO_COUNT 2
