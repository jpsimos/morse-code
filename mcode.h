#ifndef _MCODE_H
#define _MCODE_H

/*
  mcode.h
  Author Jacob Psimos 2018
*/

#define DOT 1		//Unit Length Multiple
#define DASH 3		//Unit Length Multiple

struct mletter{
  char letter;
  int m[8];
  int num_m;
}mletter;

const struct mletter codes[36] = {
  {
    'a',
    { DOT, DASH },
    2
  },
  {
    'b',
    { DASH, DOT, DOT, DOT },
    4
  },
  {
    'c',
    { DASH, DOT, DASH, DOT },
    4
  },
  {
    'd',
    { DASH, DOT, DOT },
    3
  },
  {
    'e',
    { DOT },
    1
  },
  {
    'f',
    { DOT, DOT, DASH, DOT },
    4
  },
  {
    'g',
    { DASH, DASH, DOT },
    3
  },
  {
    'h',
    { DOT, DOT, DOT, DOT },
    4
  },
  {
    'i',
    { DOT, DOT },
    2
  },
  {
    'j',
    { DOT, DASH, DASH, DASH },
    4
  },
  {
    'k',
    { DASH, DOT, DASH },
    3
  },
  {
    'l',
    { DOT, DASH, DOT, DOT },
    4
  },
  {
    'm',
    { DASH, DASH },
    2
  },
  {
    'n',
    { DASH, DOT },
    2
  },
  {
    'o',
    { DASH, DASH, DASH },
    3
  },
  {
    'p',
    { DOT, DASH, DASH, DOT },
    4
  },
  {
    'q',
    { DASH, DASH, DOT, DASH },
    4
  },
  {
    'r',
    { DOT, DASH, DOT },
    3
  },
  {
    's',
    { DOT, DOT, DOT },
    3
  },
  {
    't',
    { DASH },
    1
  },
  {
    'u',
    { DOT, DOT, DASH },
    3
  },
  {
    'v',
    { DOT, DOT, DOT, DASH },
    4
  },
  {
    'w',
    { DOT, DASH, DASH },
    3
  },
  {
    'x',
    { DASH, DOT, DOT, DASH },
    4
  },
  {
    'y',
    { DASH, DOT, DASH, DASH },
    4
  },
  {
    'z',
    { DASH, DASH, DOT, DOT },
    4
  },
  {
    '1',
    { DOT, DASH, DASH, DASH, DASH },
    5
  },
  {
    '2',
    { DOT, DOT, DASH, DASH, DASH},
    5
  },
  {
    '3',
    { DOT, DOT, DOT, DASH, DASH },
    5
  },
  {
    '4',
    { DOT, DOT, DOT, DOT, DASH },
    5
  },
  {
    '5',
    { DOT, DOT, DOT, DOT, DOT },
    5
  },
  {
    '6',
    { DASH, DOT, DOT, DOT, DOT },
    5
  },
  {
    '7',
    { DASH, DASH, DOT, DOT, DOT },
    5
  },
  {
    '8',
    { DASH, DASH, DASH, DOT, DOT },
    5
  },
  {
    '9',
    { DASH, DASH, DASH, DASH, DOT },
    5
  },
  {
    '0',
    { DASH, DASH, DASH, DASH, DASH },
    5
  }
};

#endif
