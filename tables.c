#if 0
    Cyber Radio 1 - Internet Radio Client/Server System - SGI audio code
    Copyright (C) 1995  John Selbie

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

    John Selbie
    1600 NW 4th Avenue
    #24
    Gainesville, FL 32603

    e-mail: jselbie@cis.ufl.edu

#endif



#include "tables.h"

short ulawValues[] = {
 -32124,  -31100,  -30076,  -29052,  -28028,  -27004,  -25980,  -24956, 
 -23932,  -22908,  -21884,  -20860,  -19836,  -18812,  -17788,  -16764, 
 -15996,  -15484,  -14972,  -14460,  -13948,  -13436,  -12924,  -12412, 
 -11900,  -11388,  -10876,  -10364,   -9852,   -9340,   -8828,   -8316, 
  -7932,   -7676,   -7420,   -7164,   -6908,   -6652,   -6396,   -6140, 
  -5884,   -5628,   -5372,   -5116,   -4860,   -4604,   -4348,   -4092, 
  -3900,   -3772,   -3644,   -3516,   -3388,   -3260,   -3132,   -3004, 
  -2876,   -2748,   -2620,   -2492,   -2364,   -2236,   -2108,   -1980, 
  -1884,   -1820,   -1756,   -1692,   -1628,   -1564,   -1500,   -1436, 
  -1372,   -1308,   -1244,   -1180,   -1116,   -1052,    -988,    -924, 
   -876,    -844,    -812,    -780,    -748,    -716,    -684,    -652, 
   -620,    -588,    -556,    -524,    -492,    -460,    -428,    -396, 
   -372,    -356,    -340,    -324,    -308,    -292,    -276,    -260, 
   -244,    -228,    -212,    -196,    -180,    -164,    -148,    -132, 
   -120,    -112,    -104,     -96,     -88,     -80,     -72,     -64, 
    -56,     -48,     -40,     -32,     -24,     -16,      -8,       0, 
  32124,   31100,   30076,   29052,   28028,   27004,   25980,   24956, 
  23932,   22908,   21884,   20860,   19836,   18812,   17788,   16764, 
  15996,   15484,   14972,   14460,   13948,   13436,   12924,   12412, 
  11900,   11388,   10876,   10364,    9852,    9340,    8828,    8316, 
   7932,    7676,    7420,    7164,    6908,    6652,    6396,    6140, 
   5884,    5628,    5372,    5116,    4860,    4604,    4348,    4092, 
   3900,    3772,    3644,    3516,    3388,    3260,    3132,    3004, 
   2876,    2748,    2620,    2492,    2364,    2236,    2108,    1980, 
   1884,    1820,    1756,    1692,    1628,    1564,    1500,    1436, 
   1372,    1308,    1244,    1180,    1116,    1052,     988,     924, 
    876,     844,     812,     780,     748,     716,     684,     652, 
    620,     588,     556,     524,     492,     460,     428,     396, 
    372,     356,     340,     324,     308,     292,     276,     260, 
    244,     228,     212,     196,     180,     164,     148,     132, 
    120,     112,     104,      96,      88,      80,      72,      64, 
     56,      48,      40,      32,      24,      16,       8, };

linearRange linearValue[] = {
{  -32768,  -32124,   0},
{  -32123,  -31100,   1},
{  -31099,  -30076,   2},
{  -30075,  -29052,   3},
{  -29051,  -28028,   4},
{  -28027,  -27004,   5},
{  -27003,  -25980,   6},
{  -25979,  -24956,   7},
{  -24955,  -23932,   8},
{  -23931,  -22908,   9},
{  -22907,  -21884,  10},
{  -21883,  -20860,  11},
{  -20859,  -19836,  12},
{  -19835,  -18812,  13},
{  -18811,  -17788,  14},
{  -17787,  -16764,  15},
{  -16763,  -15996,  16},
{  -15995,  -15484,  17},
{  -15483,  -14972,  18},
{  -14971,  -14460,  19},
{  -14459,  -13948,  20},
{  -13947,  -13436,  21},
{  -13435,  -12924,  22},
{  -12923,  -12412,  23},
{  -12411,  -11900,  24},
{  -11899,  -11388,  25},
{  -11387,  -10876,  26},
{  -10875,  -10364,  27},
{  -10363,   -9852,  28},
{   -9851,   -9340,  29},
{   -9339,   -8828,  30},
{   -8827,   -8316,  31},
{   -8315,   -7932,  32},
{   -7931,   -7676,  33},
{   -7675,   -7420,  34},
{   -7419,   -7164,  35},
{   -7163,   -6908,  36},
{   -6907,   -6652,  37},
{   -6651,   -6396,  38},
{   -6395,   -6140,  39},
{   -6139,   -5884,  40},
{   -5883,   -5628,  41},
{   -5627,   -5372,  42},
{   -5371,   -5116,  43},
{   -5115,   -4860,  44},
{   -4859,   -4604,  45},
{   -4603,   -4348,  46},
{   -4347,   -4092,  47},
{   -4091,   -3900,  48},
{   -3899,   -3772,  49},
{   -3771,   -3644,  50},
{   -3643,   -3516,  51},
{   -3515,   -3388,  52},
{   -3387,   -3260,  53},
{   -3259,   -3132,  54},
{   -3131,   -3004,  55},
{   -3003,   -2876,  56},
{   -2875,   -2748,  57},
{   -2747,   -2620,  58},
{   -2619,   -2492,  59},
{   -2491,   -2364,  60},
{   -2363,   -2236,  61},
{   -2235,   -2108,  62},
{   -2107,   -1980,  63},
{   -1979,   -1884,  64},
{   -1883,   -1820,  65},
{   -1819,   -1756,  66},
{   -1755,   -1692,  67},
{   -1691,   -1628,  68},
{   -1627,   -1564,  69},
{   -1563,   -1500,  70},
{   -1499,   -1436,  71},
{   -1435,   -1372,  72},
{   -1371,   -1308,  73},
{   -1307,   -1244,  74},
{   -1243,   -1180,  75},
{   -1179,   -1116,  76},
{   -1115,   -1052,  77},
{   -1051,    -988,  78},
{    -987,    -924,  79},
{    -923,    -876,  80},
{    -875,    -844,  81},
{    -843,    -812,  82},
{    -811,    -780,  83},
{    -779,    -748,  84},
{    -747,    -716,  85},
{    -715,    -684,  86},
{    -683,    -652,  87},
{    -651,    -620,  88},
{    -619,    -588,  89},
{    -587,    -556,  90},
{    -555,    -524,  91},
{    -523,    -492,  92},
{    -491,    -460,  93},
{    -459,    -428,  94},
{    -427,    -396,  95},
{    -395,    -372,  96},
{    -371,    -356,  97},
{    -355,    -340,  98},
{    -339,    -324,  99},
{    -323,    -308, 100},
{    -307,    -292, 101},
{    -291,    -276, 102},
{    -275,    -260, 103},
{    -259,    -244, 104},
{    -243,    -228, 105},
{    -227,    -212, 106},
{    -211,    -196, 107},
{    -195,    -180, 108},
{    -179,    -164, 109},
{    -163,    -148, 110},
{    -147,    -132, 111},
{    -131,    -120, 112},
{    -119,    -112, 113},
{    -111,    -104, 114},
{    -103,     -96, 115},
{     -95,     -88, 116},
{     -87,     -80, 117},
{     -79,     -72, 118},
{     -71,     -64, 119},
{     -63,     -56, 120},
{     -55,     -48, 121},
{     -47,     -40, 122},
{     -39,     -32, 123},
{     -31,     -24, 124},
{     -23,     -16, 125},
{     -15,      -8, 126},
{      -7,       0, 127},
{       1,       8, 254},
{       9,      16, 253},
{      17,      24, 252},
{      25,      32, 251},
{      33,      40, 250},
{      41,      48, 249},
{      49,      56, 248},
{      57,      64, 247},
{      65,      72, 246},
{      73,      80, 245},
{      81,      88, 244},
{      89,      96, 243},
{      97,     104, 242},
{     105,     112, 241},
{     113,     120, 240},
{     121,     132, 239},
{     133,     148, 238},
{     149,     164, 237},
{     165,     180, 236},
{     181,     196, 235},
{     197,     212, 234},
{     213,     228, 233},
{     229,     244, 232},
{     245,     260, 231},
{     261,     276, 230},
{     277,     292, 229},
{     293,     308, 228},
{     309,     324, 227},
{     325,     340, 226},
{     341,     356, 225},
{     357,     372, 224},
{     373,     396, 223},
{     397,     428, 222},
{     429,     460, 221},
{     461,     492, 220},
{     493,     524, 219},
{     525,     556, 218},
{     557,     588, 217},
{     589,     620, 216},
{     621,     652, 215},
{     653,     684, 214},
{     685,     716, 213},
{     717,     748, 212},
{     749,     780, 211},
{     781,     812, 210},
{     813,     844, 209},
{     845,     876, 208},
{     877,     924, 207},
{     925,     988, 206},
{     989,    1052, 205},
{    1053,    1116, 204},
{    1117,    1180, 203},
{    1181,    1244, 202},
{    1245,    1308, 201},
{    1309,    1372, 200},
{    1373,    1436, 199},
{    1437,    1500, 198},
{    1501,    1564, 197},
{    1565,    1628, 196},
{    1629,    1692, 195},
{    1693,    1756, 194},
{    1757,    1820, 193},
{    1821,    1884, 192},
{    1885,    1980, 191},
{    1981,    2108, 190},
{    2109,    2236, 189},
{    2237,    2364, 188},
{    2365,    2492, 187},
{    2493,    2620, 186},
{    2621,    2748, 185},
{    2749,    2876, 184},
{    2877,    3004, 183},
{    3005,    3132, 182},
{    3133,    3260, 181},
{    3261,    3388, 180},
{    3389,    3516, 179},
{    3517,    3644, 178},
{    3645,    3772, 177},
{    3773,    3900, 176},
{    3901,    4092, 175},
{    4093,    4348, 174},
{    4349,    4604, 173},
{    4605,    4860, 172},
{    4861,    5116, 171},
{    5117,    5372, 170},
{    5373,    5628, 169},
{    5629,    5884, 168},
{    5885,    6140, 167},
{    6141,    6396, 166},
{    6397,    6652, 165},
{    6653,    6908, 164},
{    6909,    7164, 163},
{    7165,    7420, 162},
{    7421,    7676, 161},
{    7677,    7932, 160},
{    7933,    8316, 159},
{    8317,    8828, 158},
{    8829,    9340, 157},
{    9341,    9852, 156},
{    9853,   10364, 155},
{   10365,   10876, 154},
{   10877,   11388, 153},
{   11389,   11900, 152},
{   11901,   12412, 151},
{   12413,   12924, 150},
{   12925,   13436, 149},
{   13437,   13948, 148},
{   13949,   14460, 147},
{   14461,   14972, 146},
{   14973,   15484, 145},
{   15485,   15996, 144},
{   15997,   16764, 143},
{   16765,   17788, 142},
{   17789,   18812, 141},
{   18813,   19836, 140},
{   19837,   20860, 139},
{   20861,   21884, 138},
{   21885,   22908, 137},
{   22909,   23932, 136},
{   23933,   24956, 135},
{   24957,   25980, 134},
{   25981,   27004, 133},
{   27005,   28028, 132},
{   28029,   29052, 131},
{   29053,   30076, 130},
{   30077,   31100, 129},
{   31101,   32767, 128},
};