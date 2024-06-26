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

#ifdef POINTING_DEVICE_ENABLE
    #define ANALOG_JOYSTICK_X_AXIS_PIN  B4
    #define ANALOG_JOYSTICK_Y_AXIS_PIN  B5
    #define ANALOG_JOYSTICK_CLICK_PIN  E6
#endif

#ifdef WPM_ENABLE
    #define SPLIT_WPM_ENABLE
#endif

#ifdef AUDIO_ENABLE
    #define AUDIO_PIN B5
    #define AUDIO_CLICKY
#endif
