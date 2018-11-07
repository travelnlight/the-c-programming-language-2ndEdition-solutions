/**
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution to Exercise 2-6.
 *
 */

#include<stdio.h>

unsigned invert(unsigned, int, int);

 main() {

     printf("invert(105, 4, 3) %u\n", invert(105, 4, 3));

 }

 /** Evolution of mask starting with ~0 shown in reverse order.
  * 11100011
  * 00011100
  * 00000111
  * 11111000
  * 11111111
  * 00000000
  */

 unsigned invert(unsigned x, int p, int n) {

     unsigned mask = (~(~0 << n)) << (p + 1 - n);

     
     return x ^ mask;

 }
