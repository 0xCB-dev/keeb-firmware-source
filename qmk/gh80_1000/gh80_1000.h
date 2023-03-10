#pragma once

#include "quantum.h"

#define LAYOUT( \
    k00,      k01, k02, k03, k30, k31, k32, k33, k36, k37, k38, k39, k3A,        k04, k05, k06,   k07, k08, k09, k0A, \
\
    k10, k11, k12, k13, k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A,   k14, k15, k16,   k17, k18, k19, k1A, \
    k20, k21, k22, k23, k50, k51, k52, k53, k55, k56, k57, k58, k59, k5A,        k24, k25, k26,   k27, k28, k29, k2A, \
    k80, k81, k82, k83, k60, k61, k62, k63, k66, k67, k68, k69,      k6A,                         k87, k88, k89, k8A, \
    k90, k91, k92, k93, k70, k71, k72, k73, k75, k76, k77, k78, k79, k7A,             k96,        k97, k98, k99, k9A, \
    kA0, kA1, kA2, kA3,      k84, k85, k86,           k64, k65, k94, k95,        kA4, kA5, kA6,   kA7, kA8, kA9, kAA \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A }, \
    { k30, k31, k32, k33, KC_NO, KC_NO, k36, k37, k38, k39, k3A }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A }, \
    { k50, k51, k52, k53, KC_NO, k55, k56, k57, k58, k59, k5A }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A }, \
    { k70, k71, k72, k73, KC_NO, k75, k76, k77, k78, k79, k7A }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89, k8A }, \
    { k90, k91, k92, k93, k94, k95, k96, k97, k98, k99, k9A }, \
    { kA0, kA1, kA2, kA3, kA4, kA5, kA6, kA7, kA8, kA9, kAA } \
}

// WKL ISO
#define LAYOUT_wkl_iso( \
    k00,      k01, k02, k03, k30, k31, k32, k33, k36, k37, k38, k39, k3A,   k04, k05, k06, \
\
    k10, k11, k12, k13, k40, k41, k42, k43, k44, k45, k46, k47, k48, k4A,   k14, k15, k16,   k17, k18, k19, k1A, \
    k20, k21, k22, k23, k50, k51, k52, k53, k55, k56, k57, k58, k59,        k24, k25, k26,   k27, k28, k29, k8A, \
    k80, k81, k82, k83, k60, k61, k62, k63, k66, k67, k68, k69, k5A, k6A,                    k87, k88, k89, \
    k90, k91, k92, k93, k70, k71, k72, k73, k75, k76, k77, k78, k79,             k96,        k97, k98, k99, kAA, \
    kA0,      kA2,                     k85,                k65,      k95,   kA4, kA5, kA6,   kA7,      kA9 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, KC_NO }, \
    { k30, k31, k32, k33, KC_NO, KC_NO, k36, k37, k38, k39, k3A }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, KC_NO, k4A }, \
    { k50, k51, k52, k53, KC_NO, k55, k56, k57, k58, k59, k5A }, \
    { k60, k61, k62, k63, KC_NO, k65, k66, k67, k68, k69, k6A }, \
    { k70, k71, k72, k73, KC_NO, k75, k76, k77, k78, k79, KC_NO }, \
    { k80, k81, k82, k83, KC_NO, k85, KC_NO, k87, k88, k89, k8A }, \
    { k90, k91, k92, k93, KC_NO, k95, k96, k97, k98, k99, KC_NO }, \
    { kA0, KC_NO, kA2, KC_NO, kA4, kA5, kA6, kA7, KC_NO, kA9, kAA } \
}
