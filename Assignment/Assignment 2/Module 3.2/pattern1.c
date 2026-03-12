#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, n = 5; 

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            
            if(i % 2 != 0)
                printf("%d ", (j+1) % 2);  
            else
                printf("%d ", j % 2);      
        }
        printf("\n");
    }

    getch();
}
