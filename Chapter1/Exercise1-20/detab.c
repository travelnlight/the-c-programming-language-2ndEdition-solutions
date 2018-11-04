#include<stdio.h>

#define TABSTOP 8
#define MAXLINE 1000

char out [MAXLINE];
int end;

int calculatespace();
void printspace(int n);
                   
main() {
    end = 0;
    int c;

    while ((c = getchar())!= EOF) {
        if (c != '\t' && c != '\n') {
            out[++end] = c;
            putchar(c);
         } else if (c == '\t') {
            int cnt = calculatespace();
            printspace(cnt);
         } else {
            printf("\n");
            end = 0;
         }
    }
}

/* Calculate the number of space to reach the next tabstop */
int calculatespace() {
    int mod = end % TABSTOP;
    if (mod == 0 && end == 0)  { // tab at the biginning 
        return TABSTOP;
    } else if (mod == 0) { // tab at the middle
        return 0;
    } else {
        int cnt = TABSTOP - mod;
        end = end + cnt;
        return cnt;
    }
}

void printspace(int n) {
    for (int i = 0; i < n; i++) {
       putchar(' '); 
    }
}
