/** 
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution to Exercise 2-6
 * 
 * How to solve CS problem: 
 * 1. Try with example to get a solid understanding of the problem.
 * 2. Break large problem into smaller and easier ones.
 * 3. Scientific and experiemntal thinking, logic and reasoning.
 */ 

#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main() {

    printf("setbits(109, 4, 3, 204) %u\n", setbits(109, 4, 3, 204));

}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    int mask = ~(~0 << n);

    int a = x & ~(mask << (p + 1 - n));

    int b = (y & mask) << (p + 1 - n);

    return a | b;
}
