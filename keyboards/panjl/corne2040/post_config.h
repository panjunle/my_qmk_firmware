#pragma once

#ifndef BOOTMAGIC_LITE_ROW
#    define BOOTMAGIC_LITE_ROW 0
#endif
#ifndef BOOTMAGIC_LITE_COLUMN
#    define BOOTMAGIC_LITE_COLUMN 0
#endif

#ifdef OLED_ENABLE
    #ifndef OLED_FONT_H
        #define OLED_FONT_H "keyboards/panjl/corne2040/lib/glcdfont.c"
    #endif
    #ifndef OLED_TIMEOUT
        #define OLED_TIMEOUT 60000
    #endif
#endif
