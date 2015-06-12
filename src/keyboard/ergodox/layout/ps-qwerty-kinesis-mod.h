/* ----------------------------------------------------------------------------
 * ergoDOX : layout : QWERTY : exports
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#ifndef KEYBOARD__ERGODOX__LAYOUT__QWERTY_h
	#define KEYBOARD__ERGODOX__LAYOUT__QWERTY_h

	#include "../controller.h"

	// --------------------------------------------------------------------

	#define kb_led_num_on()      nothing()
	#define kb_led_num_off()     nothing()
	#define kb_led_caps_on()     _kb_led_2_on()
	#define kb_led_caps_off()    _kb_led_2_off()
	#define kb_led_scroll_on()   nothing()
	#define kb_led_scroll_off()  nothing()

	// --------------------------------------------------------------------

	#include "./default--led-control.h"
	#include "./default--matrix-control.h"

#endif

