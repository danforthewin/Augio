#ifndef AUGIO_H
#define AUGIO_H

#include "quantum.h"

#define LAYOUT( \
	K10, K00, K11, K01, K12, K02, K13, K03, K14, K04, K15, K05, K16, K06, K17, K07, \
	K30, K20, K31, K21, K32, K22, K33, K23, K34, K24, K35, K25, K36, K26, K37, K27, \
	K50, K40, K51, K41, K52, K42, K53, K43, K54, K44, K55, K45, K56, K46, K57, K47, \
	K70, K60, K71, K61, K72, K62, K73, K63,    K74,   K75, K65, K76, K66, K77, K67 \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17 }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37 }, \
	{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47 }, \
	{ K50,   K51,   K52,   K53,   K54,   K55,   K56,   K57 }, \
	{ K60,   K61,   K62,   K63,   KC_NO, K65,   K66,   K67 }, \
	{ K70,   K71,   K72,   K73,   K74,   K75,   K76,   K77 }  \
}

#endif
