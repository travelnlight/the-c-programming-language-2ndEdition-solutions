/** 
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution for Exe 2-2. 
 */

#include<stdio.h>
#include<ctype.h>

#define MAXLINE 64
char line[MAXLINE];

int fetchLine();
int convert(char);
int htoi(char[]);

main() {
    int len, decimal;
    while ((len = fetchLine()) > 0) { 
        decimal = htoi(line);
        printf("%d\n", decimal);
    }
}

int fetchLine() {
    int i, c;
    for (i = 0; i < MAXLINE + 1 && (c = getchar()) != '\n' && c != EOF; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

/* convert string of hexdecimal digits to decimal
 * return -1 if contains nonvalid input
 */
int htoi(char s[]) {
    int n, i = 0;
    int c, decimal;
    while (line[i] != '\0' && line[i] != '\n') {
        if (i == 0 && line[i] == '0') i++;
        if (i == 1 && (line[i] == 'x' || line[i] == 'X')) i++; /* ignore "0x" */
            c = line[i];
            decimal = convert(c);
            if (decimal < 0) {  /* invalid char*/
                n = -1;
                printf("Input not valid ");
                break;
            } else {
                n = n * 16 + decimal; /* valid */
                i++;
            }
        }
    return n;
 }

/* hexdecimal convertion: 0-9 same, A-F and a-f to 10 - 15 */
int convert(char c) {
    int i, val;
    val = 0;
    if (c >= '0' && c <= '9') val = c - '0';
    else {
        c = tolower(c); /* use lower case for comparison */
        if (c >= 'a' && c <= 'f') {
            val = 10 + c - 'a';
        } else { 
            val = -1;
        }
    }
    return val;
}
