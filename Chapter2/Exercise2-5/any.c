/**
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution to Exercise 2-5
 */ 

#include<stdio.h> 

#define MAXLINE 1000


int fetchLine();
int any(char[], char[]);

main() {
  char s1[MAXLINE];
  char s2[MAXLINE];

  int len1 = fetchLine(s1);
  
  int len2 = fetchLine(s2);
  

  int result = any(s1, s2);
  printf("Result is %d\n", result);

}

int fetchLine(char line[]) {
    int c, i;
    for (i = 0; i < MAXLINE + 1 && (c = getchar()) != EOF && c != '\n'; i++ ) {
        line[i] = c;
    }
    if (c == '\n') line[i++] = c;
    line[i] = '\0';
    
    return i;
}

int any(char s1[], char s2[]) {
    int i, j, n;
    n = -1;
    for (i = 0; s1[i] != '\n' && s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\n' && s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) { 
                n = i;
                break;
            }
        }
        if (n > 0) break;
    }
    return n;

}




