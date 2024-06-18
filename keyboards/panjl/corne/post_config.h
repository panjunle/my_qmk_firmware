/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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

#pragma once

#ifndef BOOTMAGIC_LITE_ROW
#    define BOOTMAGIC_LITE_ROW 0
#endif
#ifndef BOOTMAGIC_LITE_COLUMN
#    define BOOTMAGIC_LITE_COLUMN 0
#endif

#ifdef OLED_ENABLE
    #ifndef OLED_FONT_H
        #define OLED_FONT_H "keyboards/panjl/corne/lib/glcdfont.c"
    #endif
    #ifndef OLED_TIMEOUT
        #define OLED_TIMEOUT 60000
    #endif
#endif
