#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, n = 5;      
    int num = 1;           

    for(i = 1; i <= n; i++) {       
        for(j = 1; j <= i; j++) {   
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    getch();
}
