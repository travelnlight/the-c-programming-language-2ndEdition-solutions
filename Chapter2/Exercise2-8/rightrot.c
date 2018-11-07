/** 
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution to Exercise 2-8
 */ 

#include<stdio.h>

unsigned rightrot(unsigned, int);

main() {
    printf("rightrot(227, 4) %u\n", rightrot(227, 4));
}

unsigned rightrot(unsigned x, int n) {
    unsigned a = x >> n;
    unsigned mask = ~(~0 << n);
    unsigned b = (x & mask) << (sizeof(x) * 8 - n);
    return a + b;
    
}


