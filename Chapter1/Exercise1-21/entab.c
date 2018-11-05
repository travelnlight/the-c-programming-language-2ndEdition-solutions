#include<stdio.h>

#define MAXLINE 1000
#define TABSTOP 8

char line[MAXLINE]; /* use char array to store input string */

int fetchLine(void);
void printLine(int);
void entab(int, int);
int countSpace(int start);
int findNextStop(int start);

main() {
    int len; 
    while (((len = fetchLine())) > 0) {  
        printLine(len); 
    }
}

int fetchLine(void) {
    int c, i; 
    for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c; 
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';  
    return i;
}

void printLine(int size) {
    int i, c;  

    for (i = 0; i < size; i++) {
        c = line[i];
        if (c != ' ') putchar(c);
        else { 
            int len = countSpace(i);
            if (len == 1) putchar(c);
            else { // more than one space, entab
                entab(i, len);
                i = i + len - 1;   
            }
         }
    }
}

/* count the number of consecutive spaces */
int countSpace(int start) {
    int cnt = 0; // initialize to 0, otherwise segfault
    while (line[start] == ' ') {
        cnt++;
        start++; 
    }
    return cnt;
}
/* replace spaces strings with min number of tab and space */
void entab(int start, int size) {
    int end = start + size;
    int i = start;

    while (i < end ) {      
        int next = findNextStop(i);
        if (next < end) {
            putchar('\t');
            i = next;
        } else {
            putchar(' ');
            i++;
        }
    }
}

int findNextStop(int start) {
    return start + (TABSTOP - (start % TABSTOP));
}
