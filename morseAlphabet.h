#pragma once
#include "abstractLetter.h"
#include "morseSpace.h"
/*
SPACE -> 0000 0000 0000 0000 -> 0x0000
A -> 0000 0111 0111 0001 -> 0x0771
B -> 0001 0001 0001 0111 -> 0x1117
C -> 0001 0111 0001 0111-> 0x1717
D -> 0000 0001 0001 0111-> 0x0117
E -> 0000 0000 0000 0001-> 0x0001
F -> -> 0x1711
G -> -> 0x0177
H -> -> 0x1111
I -> -> 0x0011

J-> -> 0x7771
K-> -> 0x0717
L-> -> 0x1171
M> -> 0x0011
N-> -> 0x0017
O-> -> 0x0111
P-> -> 0x1771
Q-> ->0x7177
R-> -> 0x0171
*/

// prototype definition
void pulse(unsigned char status);
void period();

#define BUILD_A AbstractLetter('a', 0x0071, &pulse, &period)
#define BUILD_B AbstractLetter('b', 0x1117, &pulse, &period)
#define BUILD_C AbstractLetter('c', 0x1717, &pulse, &period)
#define BUILD_D AbstractLetter('d', 0x0117, &pulse, &period)
#define BUILD_E AbstractLetter('e', 0x0001, &pulse, &period)
#define BUILD_F AbstractLetter('f', 0x1711, &pulse, &period)
#define BUILD_G AbstractLetter('g', 0x0177, &pulse, &period)
#define BUILD_H AbstractLetter('h', 0x1111, &pulse, &period)
#define BUILD_I AbstractLetter('i', 0x0011, &pulse, &period)
#define BUILD_J AbstractLetter('j', 0x7771, &pulse, &period)
#define BUILD_K AbstractLetter('k', 0x0717, &pulse, &period)
#define BUILD_L AbstractLetter('l', 0x1171, &pulse, &period)
#define BUILD_M AbstractLetter('m', 0x0077, &pulse, &period)
#define BUILD_N AbstractLetter('n', 0x0017, &pulse, &period)
#define BUILD_O AbstractLetter('o', 0x0777, &pulse, &period)
#define BUILD_P AbstractLetter('p', 0x1771, &pulse, &period)
#define BUILD_Q AbstractLetter('q', 0x7177, &pulse, &period)
#define BUILD_R AbstractLetter('r', 0x0171, &pulse, &period)
#define BUILD_S AbstractLetter('s', 0x0111, &pulse, &period)
#define BUILD_T AbstractLetter('t', 0x0007, &pulse, &period)
#define BUILD_U AbstractLetter('u', 0x0711, &pulse, &period)
#define BUILD_V AbstractLetter('v', 0x7111, &pulse, &period)
#define BUILD_W AbstractLetter('w', 0x0771, &pulse, &period)
#define BUILD_X AbstractLetter('x', 0x7117, &pulse, &period)
#define BUILD_Y AbstractLetter('y', 0x7717, &pulse, &period)
#define BUILD_Z AbstractLetter('z', 0x1177, &pulse, &period)
#define BUILD_SPACE MorseSpace(' ', 0x0000, &pulse, &period)

static AbstractLetter LETTER_A = BUILD_A;
static AbstractLetter LETTER_B = BUILD_B;
static AbstractLetter LETTER_C = BUILD_C;
static AbstractLetter LETTER_D = BUILD_D;
static AbstractLetter LETTER_E = BUILD_E;
static AbstractLetter LETTER_F = BUILD_F;
static AbstractLetter LETTER_G = BUILD_G;
static AbstractLetter LETTER_H = BUILD_H;
static AbstractLetter LETTER_I = BUILD_I;
static AbstractLetter LETTER_J = BUILD_J;
static AbstractLetter LETTER_K = BUILD_K;
static AbstractLetter LETTER_L = BUILD_L;
static AbstractLetter LETTER_M = BUILD_M;
static AbstractLetter LETTER_N = BUILD_N;
static AbstractLetter LETTER_O = BUILD_O;
static AbstractLetter LETTER_P = BUILD_P;
static AbstractLetter LETTER_Q = BUILD_Q;
static AbstractLetter LETTER_R = BUILD_R;
static AbstractLetter LETTER_S = BUILD_S;
static AbstractLetter LETTER_T = BUILD_T;
static AbstractLetter LETTER_U = BUILD_U;
static AbstractLetter LETTER_V = BUILD_V;
static AbstractLetter LETTER_W = BUILD_W;
static AbstractLetter LETTER_X = BUILD_X;
static AbstractLetter LETTER_Y = BUILD_Y;
static AbstractLetter LETTER_Z = BUILD_Z;
static MorseSpace SPACE = BUILD_SPACE;

#ifdef SAVE_MEMORY_TRADEOFF

#else
#include <map>
const std::map<char, AbstractLetter *> ALPHABET_2_MORSE = {
    {'a', &LETTER_A}, {'b', &LETTER_B}, {'c', &LETTER_C}, {'d', &LETTER_D},
    {'e', &LETTER_E}, {'f', &LETTER_F}, {'g', &LETTER_G}, {'h', &LETTER_H},
    {'i', &LETTER_I}, {'j', &LETTER_J}, {'k', &LETTER_K}, {'l', &LETTER_L},
    {'m', &LETTER_M}, {'n', &LETTER_N}, {'o', &LETTER_O}, {'p', &LETTER_P},
    {'q', &LETTER_Q}, {'r', &LETTER_R}, {'s', &LETTER_S}, {'t', &LETTER_T},
    {'u', &LETTER_U}, {'v', &LETTER_V}, {'w', &LETTER_W}, {'x', &LETTER_X},
    {'y', &LETTER_Y}, {'Z', &LETTER_Z}, {' ', &SPACE}};

#endif
