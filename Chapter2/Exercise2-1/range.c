/**
 * Author Na Tan <na.tan11@outlook.com>
 * 
 * Solutions to Exercise2-1, Chapter 2.
 */

#include<stdio.h>
#include<limits.h>

void computeLimit();

main() {
    printf("Range of signed char is [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char is [%u, %u]\n", 0, UCHAR_MAX);
    printf("Range of char is [%d, %d]\n", CHAR_MIN, CHAR_MAX);

    printf("Range of signed short is [%d, %d]\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short is [%d, %d]\n", 0, USHRT_MAX);

    printf("Range of signed int is [%d, %d]\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int is [%u, %u]\n", 0, UINT_MAX);
 
    printf("Range of signed long is [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long is [%d, %lu]\n", 0, ULONG_MAX);

    computeLimit();

}

void computeLimit() {
    printf("\n");
    printf("Range of signed char is [%i, %i]\n", 0xffffff80, 0x7F);
    printf("Range of unsigned char is [%u, %u]\n", 0, 0xFF);
    printf("Range of char is [%d, %d]\n", 0xffffff80, 0x7f);

    printf("Range of signed short is [%d, %d]\n", 0xffff8000, 0x7fff);
    printf("Range of unsigned short is [%d, %d]\n", 0, 0xffff);

    printf("Range of signed int is [%d, %d]\n", 0x80000000, 0x7fffffff);
    printf("Range of unsigned int is [%u, %u]\n", 0, 0xffffffff);
 
    printf("Range of signed long is [%ld, %ld]\n", 0x8000000000000000, 0x7fffffffffffffff);
    printf("Range of unsigned long is [%d, %lu]\n", 0, 0xffffffffffffffff);
}
