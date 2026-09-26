// Copyright 2023 stackskb (@stackskb)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define RGBLED_NUM 12
#define WS2812_DI_PIN B4
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_CHRISTMAS

