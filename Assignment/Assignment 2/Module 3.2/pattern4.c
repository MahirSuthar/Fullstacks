#include <stdio.h>
#include <conio.h>

void main() {
    int i, j;
    char ch;
    int n = 5; 

    for(i = 1; i <= n; i++) {
        ch = 'A';  
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    getch();
}
