/**
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution to Exercise 2-6.
 */

#include<stdio.h>

unsigned invert(unsigned, int, int);

 main() {

     printf("invert(105, 4, 3) %u\n", invert(105, 4, 3));

 }

 unsigned invert(unsigned x, int p, int n) {

     unsigned common_mask = (~(~0 << n)) << (p + 1 - n);

     unsigned a = x & ~common_mask ;

     unsigned b = ~x & common_mask;

     return a + b;

 }
