#ifndef _RJPINS_H_
#define _RJPINS_H_

#include <Arduino.h>

enum RJPin {
  J1,
  J2,
  J3,
  J4
};

const uint8_t pins[4][2] = {
  {A0, 2},
  {A1, 4},
  {A2, 7},
  {A3, 8}
};

#endif
