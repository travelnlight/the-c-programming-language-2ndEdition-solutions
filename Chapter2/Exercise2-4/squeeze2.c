/**
 * Author: Na Tan <na.tan11@outlook.com>
 * Solution to Exercise 2-4
 */ 

#include<stdio.h> 

#define MAXLINE 1000


int fetchLine();
void squeeze2(char[], char[]);

main() {
  char s1[MAXLINE];
  char s2[MAXLINE];

  int len1 = fetchLine(s1);
  printf("Input1 is %s", s1);
  int len2 = fetchLine(s2);
  printf("Input2 is %s", s2);

  squeeze2(s1, s2);
  printf("Result is %s", s1);

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

void squeeze2(char s1[], char s2[]) {
    int i, j, c;
    int k = 0;
    for (k = 0; s2[k]!= '\n' && s2[k] != '\0'; k++) {
        i, j = 0;
        for (i = 0; s1[i] != '\0'; i++) {
            if (s1[i] != s2[k]) {
                s1[j++] = s1[i];
            }
        }
        s1[j] = '\0';
    }   
}
