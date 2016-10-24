/* ----------------------------------------------------------------------------
 * ergoDOX layout : QWERTY (modified from the Kinesis layout)
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

/*
Layer 0: Qwerty
Layer 1: symbols
Layer 2: Mirrorboard
Layer 3: Numpad (both hands)
Layer 4: mypaint
*/


const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

  KB_MATRIX_LAYER(  // layout: layer 0: default
// unused
0,
// left hand
    _equal,     _1,    _2, _3,    _4, _5,      3,
      _tab,     _Q,    _W, _E,    _R, _T,   _esc,
    _ctrlL,     _A,    _S, _D,    _F, _G,
   _shiftL,     _Z,    _X, _C,    _V, _B, _space,
         2, _grave, _altL,  1, _guiL,
                                         _ctrlL, _altL,
                                      0,      0, _home,
                                    _bs,   _del,  _end,
// right hand
        3, _6,      _7,      _8,      _9,         _0,     _dash,
        0, _Y,      _U,      _I,      _O,         _P, _backslash,
           _H,      _J,      _K,      _L, _semicolon,     _quote,
        5, _N,      _M,  _comma, _period,     _slash,    _shiftR,
                     1, _arrowL, _arrowD,    _arrowU,    _arrowR,    
 _altR, _ctrlR,
_pageU,      0,      0,
_pageD, _enter, _space ),


  KB_MATRIX_LAYER(  // layout: layer 1: function and symbol keys
// unused
0,
// left hand
  4,        _F1,        _F2,       _F3,       _F4,       _F5, _F11,
  0,  _bracketL,  _bracketR, _bracketL, _bracketR,         0,    1,
  0, _semicolon,     _slash,     _dash,     _0_kp,_semicolon,
  0,      _6_kp,      _7_kp,     _8_kp,     _9_kp,    _equal,    2,
  0,          0,          0,         0,         0,
                                                             0,  0,
                                                         0,  0,  0,
                                                         0,  0,  0,
// right hand
_F12,       _F6,    _F7,       _F8,       _F9,         _F10,     _F12,
   0,         0,  _dash,    _comma,   _period,_currencyUnit, _volumeU,
     _backslash,  _1_kp,        _9,        _0,       _equal, _volumeD,
   2,        _8,  _2_kp,     _3_kp,     _4_kp,        _5_kp,    _mute,
                      0,         0,         0,            0,        0,
  0,  0,
  0,  0,  0,
  0,  0,  0 ),


  KB_MATRIX_LAYER(  // layout: layer 2: qwerty mirrored
// unused
0,
// left hand
_bs,         _0,      _9,     _8, _7,  _6, 0,
  0,         _P,      _O,     _I, _U,  _Y, 0,
  0, _semicolon,      _L,     _K, _J,  _H,
  0,     _slash, _period, _comma, _M,  _N, 0,
  0,    _arrowD, _arrowU,      0,  0,
                                                0,  0,
                                        0,      0,  0,
                                        0, _enter,  0,
// right hand
0,  _5,  _4,  _3,  _2,  _1, _equal,
0,  _T,  _R,  _E,  _W,  _Q,      0, 
    _G,  _F,  _D,  _S,  _A,      0,
0,  _B,  _V,  _C,  _X,  _Z,      0,
          0,   0,   0,   0,      0,                 
0,  0,
0,  0,  0,
0,  0,  0 ),


  KB_MATRIX_LAYER(  // layout: layer 3: numpad
// unused
0,
// left hand
  _bs,    _mul_kp,    _div_kp,  _equal_kp,          0,          0,          0,
    0,    _sub_kp,      _9_kp,      _8_kp,      _7_kp,          0,          0,
    0,    _add_kp,      _6_kp,      _5_kp,      _4_kp,          0,
    0,  _enter_kp,      _3_kp,      _2_kp,      _1_kp,          0,          0,
    0,  _enter_kp,    _period,          0,    _period,

                                                                0,          0,
                                                    0,          0,          0,
                                                    0,          0,          0,
    // right hand
    3,          0,          3,  _equal_kp,    _div_kp,      _mul_kp, _bs,
    0,          0,      _7_kp,      _8_kp,      _9_kp,      _sub_kp,   0,
                0,      _4_kp,      _5_kp,      _6_kp,      _add_kp,   0,
    0,          0,      _1_kp,      _2_kp,      _3_kp,    _enter_kp,   0,
                      _insert,          0,    _period,    _enter_kp,   0,

    0,          0,
    0,          0,          0,
    0,          0,          _0_kp ),

  KB_MATRIX_LAYER(  // layout: layer 4: mypaint layer
// unused
0,
// left hand
  0, _1, _2,     _3,    _4, _5, _esc,
  0, _6, _7,     _8,    _9, _0, _F6,
  0, _A, _S,     _D,    _F, _E,
  0, _Z, _Y,     _O,    _R, _M, _F7,
  0,  0,  0, _equal, _dash,
                              _ctrlR,  0,
                          0,  0,  0,
                          0,  0,  0,
// right hand
      0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,
          0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,
              0,  0,  0,  0,  0,
  0,  0,
  0,  0,  0,
  0,  0,  0 ),

  KB_MATRIX_LAYER(  // layout: layer 5: Colemak layer 
    0,  
    // left hand
    0, _1,  _2,  _3,  _4, _5,    2,
    0, _Q,  _W,  _F,  _P, _G,    0,
    0, _A,  _R,  _S,  _T, _D,
    0, _Z,  _X,  _C,  _V, _B,    2,
    0,  0,   0,   0,   0,
                              0, 0,
                         0,   0, 0,
                         0,   0, 0,

    // right hand
    3,  _6,  _7,     _8,      _9,         _0,  0,
    0,  _J,  _L,     _U,      _Y, _semicolon,  0,
        _H,  _N,     _E,      _I,         _O,  0,
    5,  _K,  _M, _comma, _period,     _slash,  0,
              1,      0,       0,          0,  0,

    0,  0,
    0,  0,  0,
    0,  0,  0 ),

};

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

// aliases

// basic
#define  kprrel  &kbfun_press_release
#define  ktog    &kbfun_toggle
#define  ktrans  &kbfun_transparent
// --- layer push/pop functions
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lstick2 &kbfun_layer_sticky_2
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  lpopall  &kbfun_layer_pop_all
// ---

// device
#define  dbtldr  &kbfun_jump_to_bootloader

// special
#define  sshprre  &kbfun_shift_press_release
#define  salprre  &kbfun_alt_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------


const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

  KB_MATRIX_LAYER(  // press: layer 0: qwerty
// unused
NULL,
// left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, slpunum,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  s2kcap, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
 lstick2, kprrel, kprrel, lpush1, kprrel,
                                                 kprrel, kprrel,
                                           NULL,   NULL, kprrel,
                                         kprrel, kprrel, kprrel,
// right hand
        slpunum, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
        lpopall, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
                 kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
        lpush5, kprrel, kprrel, kprrel, kprrel, kprrel, s2kcap,
                         lpush1, kprrel, kprrel, kprrel, kprrel,
 kprrel, kprrel,
 kprrel,   NULL,   NULL,
 kprrel, kprrel, kprrel ),


  KB_MATRIX_LAYER(  // press: layer 1: function and symbol keys
// unused
NULL,
// left hand
   lpush4, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
 ktrans,sshprre,sshprre, kprrel, kprrel,   NULL,  ktrans,
 ktrans, kprrel, kprrel, kprrel, kprrel,sshprre,
 ktrans, kprrel, kprrel, kprrel, kprrel,sshprre, ktrans,
 ktrans, ktrans, ktrans, ktrans, ktrans,
                                                 ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
// right hand
        kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
        ktrans,   NULL, kprrel,sshprre,sshprre, kprrel, kprrel,
                kprrel, kprrel,sshprre,sshprre,sshprre, kprrel,
        lpush2,sshprre, kprrel, kprrel, kprrel, kprrel, kprrel,
                        ktrans, ktrans, ktrans, ktrans, ktrans,
 ktrans, ktrans,
 ktrans, ktrans, ktrans,
 ktrans, ktrans, ktrans ),


  KB_MATRIX_LAYER(  // press: layer 2: qwerty mirrored
// unused
NULL,
// left hand
kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     lpopall,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     ktrans,     ktrans,

                                                            ktrans,     ktrans,     
                                                ktrans,     ktrans,     ktrans,
                                                ktrans,     kprrel,     ktrans,
// right hand
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
            kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
                        ktrans,     ktrans,     ktrans,     ktrans,     ktrans,

ktrans,     ktrans,     
ktrans,     ktrans,     ktrans,
ktrans,     ktrans,     ktrans ),


  KB_MATRIX_LAYER(  // press: layer 3: numpad
// unused
NULL,
// left hand
kprrel,     ktrans,     ktrans,     ktrans,     slponum,     ktrans,     slponum,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,     ktrans,
ktrans,     kprrel,     kprrel,     ktrans,     kprrel,

                                                            ktrans,     ktrans,
                                                ktrans,     ktrans,     ktrans,
                                                kprrel,     ktrans,     ktrans,
// right hand
slponum,     ktrans,    slponum,     kprrel,     kprrel,     kprrel,     kprrel,
 ktrans,     ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
             ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
 lpop3,      ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
                         kprrel,     ktrans,     kprrel,     kprrel,     ktrans,

ktrans,     ktrans,
ktrans,     ktrans,     ktrans,
ktrans,     ktrans,     kprrel ),

  KB_MATRIX_LAYER(  // press: layer 4: mypaint layer
// unused
NULL,
// left hand
   lpop4,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   ktrans,   ktrans,   sshprre,   kprrel,
                                                   kprrel,   ktrans,
                                           ktrans,   ktrans,   ktrans,
                                           ktrans,   ktrans,   ktrans,
// right hand
          ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
          ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
                  ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
          ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
                          ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
   ktrans,   ktrans,
   ktrans,   ktrans,   ktrans,
   ktrans,   ktrans,   ktrans ),

  KB_MATRIX_LAYER( NULL, //press: layer 5: colemak
    // left hand
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    ktrans,     ktrans,     ktrans,     ktrans,     ktrans,
    
                                                                ktrans,     ktrans,
                                                      NULL,       NULL,     ktrans,
                                                    ktrans,     ktrans,     ktrans,
    // right hand
    ktrans,    kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    ktrans,    kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
               kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
     lpop5,    kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
                           ktrans,     ktrans,     ktrans,     ktrans,     ktrans,

    ktrans,     ktrans,
    ktrans,     NULL,       NULL,
    ktrans,     ktrans,     ktrans ),
};

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

  KB_MATRIX_LAYER(  // release: layer 0: Qwerty
// unused
NULL,
// left hand
 kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,   slponum,
 kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,  kprrel,
 kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
 s2kcap, kprrel, kprrel, kprrel, kprrel, kprrel,  kprrel,
 lstick2,kprrel, kprrel, lpop1, kprrel,
                                                 kprrel, kprrel,
                                           NULL,   NULL, kprrel,
                                         kprrel, kprrel, kprrel,
// right hand
          NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
        NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
                kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
         NULL, kprrel, kprrel, kprrel, kprrel, kprrel, s2kcap,
                        lpop1, kprrel, kprrel, kprrel, kprrel,
 kprrel, kprrel,
 kprrel,   NULL,   NULL,
 kprrel, kprrel, kprrel ),


  KB_MATRIX_LAYER(  // release: layer 1: function and symbol keys
// unused
NULL,
// left hand
   NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
 ktrans,sshprre,sshprre, kprrel, kprrel,   NULL,   ktrans,
 ktrans, kprrel, kprrel, kprrel, kprrel,sshprre,
 ktrans, kprrel, kprrel, kprrel, kprrel,sshprre,  ktrans,
 ktrans, ktrans, ktrans, ktrans, ktrans,
                                                 ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
// right hand
        kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
        ktrans,   NULL, kprrel,sshprre,sshprre, kprrel, kprrel,
                kprrel, kprrel,sshprre,sshprre,sshprre, kprrel,
         lpop2,sshprre, kprrel, kprrel, kprrel, kprrel, kprrel,
                        lpop1, ktrans, ktrans, ktrans, ktrans,
 ktrans, ktrans,
 ktrans, ktrans, ktrans,
 ktrans, ktrans, ktrans ),


  KB_MATRIX_LAYER(  // release: layer 2: qwerty mirrored
// unused
NULL,
// left hand
kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     NULL,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     ktrans,     ktrans,

                                                            ktrans,     ktrans,
                                                ktrans,     ktrans,     ktrans,
                                                ktrans,     kprrel,     ktrans,
// right hand
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
            kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
                        ktrans,     ktrans,     ktrans,     ktrans,     ktrans,

ktrans,     ktrans,
ktrans,     ktrans,     ktrans,
ktrans,     ktrans,     ktrans ),


  KB_MATRIX_LAYER(  // release: layer 3: numpad
// unused
NULL,
// left hand
kprrel,     ktrans,     ktrans,     ktrans,     NULL,     ktrans,     NULL,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,     ktrans,
ktrans,     kprrel,     kprrel,     ktrans,     kprrel,

                                                            ktrans,     ktrans,
                                                ktrans,     ktrans,     ktrans,
                                                kprrel,     ktrans,     ktrans,
// right hand
NULL,       ktrans,     NULL,       kprrel,     kprrel,     kprrel,     kprrel,
ktrans,     ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
            ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
slponum,      ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
                        kprrel,     ktrans,     kprrel,     kprrel,     ktrans,

ktrans,     ktrans,
ktrans,     ktrans,     ktrans,
ktrans,     ktrans,     kprrel ),

  KB_MATRIX_LAYER(  // release: layer 4: mypaint layer
// unused
NULL,
// left hand
   lpop1,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,   kprrel,
   ktrans,   ktrans,   ktrans,   sshprre,   kprrel,
                                                   kprrel,   ktrans,
                                           ktrans,   ktrans,   ktrans,
                                           ktrans,   ktrans,   ktrans,
// right hand
          ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
          ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
                    ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
          ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
                              ktrans,   ktrans,   ktrans,   ktrans,   ktrans,
   ktrans,   ktrans,
   ktrans,   ktrans,   ktrans,
   ktrans,   ktrans,   ktrans ),

  KB_MATRIX_LAYER( NULL, // release: layer 5: colemak
    // left hand
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     NULL,
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,
    ktrans,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    ktrans,     ktrans,     ktrans,     ktrans,     ktrans,

                                                                ktrans,     ktrans,
                                                    NULL,       NULL,       ktrans,
                                                    ktrans,     ktrans,     ktrans,
    // right hand
    NULL,       kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    NULL,     kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
                kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
    NULL,    kprrel,     kprrel,     kprrel,     kprrel,     kprrel,     ktrans,
                            ktrans,      ktrans,     ktrans,     ktrans,     ktrans,

    ktrans,     ktrans,
    ktrans,     NULL,       NULL,
    ktrans,     ktrans,     ktrans ),
  KB_MATRIX_LAYER(  // release: layer 3: nothing (just making sure unused
        // functions don't get compiled out)
// unused
NULL,
// other
 kprrel, lpush8,  lpop8,   NULL,   NULL,   NULL,   NULL,   NULL,
   ktog, lpush9,  lpop9,   NULL,   NULL,   NULL,   NULL,   NULL,
 ktrans,lpush10, lpop10,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush1,  lpop1,lpopall,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush2,  lpop2, dbtldr,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush3,  lpop3,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush4,  lpop4, s2kcap,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush5,  lpop5,slpunum,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush6,  lpop6,slponum,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush7,  lpop7,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL )

};

void nothing(void) {}