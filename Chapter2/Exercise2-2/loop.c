/**
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution for Exercise 2-2, Chapter 2.
 */

#include<stdio.h>

#define MAXLINE 1000
char line[MAXLINE];

int fetchLine();

main() {
    int len;
    while ((len = fetchLine()) > 0) {
        printf("%s\n", line);
    }
}

int fetchLine() {
    int i, c;
    int lim = MAXLINE;
    for (i = 0; i < lim - 1; i++) {
        c = getchar();
        if (c == EOF) break;
        else if (c == '\n') {
            line[i] = c;
            break;
        }
        else line[i] = c;
    }
    line[i++] = '\0';
    return i;
}
