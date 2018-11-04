#include<stdio.h>

#define MAXLINE 1000
#define TABSTOP 8

char line[MAXLINE];

int fetchline();
void printLine(int);
void entab(int, int);
int countSpace(int start);
int findNextStop(int start);

main() {
    int len;
    while ((len = fetchLine()) > 0) {
        
        printLine(len);
        printf("finish");
    }
}

int fetchLine() {
    int c, i;
    extern char line[];

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
            printf("test");
            int len = countSpace(i);
            
            if (len == 1) putchar(c);
            else { // more than one space, entab
                printf("before");
                entab(i, len);
                printf("after");
                i = i + len - 1;
            }
        }
    }
}

int countSpace(int start) {
    int cnt;
    while (line[start] == ' ') {
        
        cnt++;
        start++;
    }
    return cnt;
}

void entab(int start, int size) {
    int end = start + size - 1;
    int i = start;
    while (i < end + 1 ) {      
        int next = findNextStop(i);
        if (next <= end + 1) {
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
