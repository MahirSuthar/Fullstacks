#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, n = 5;  
    char ch = 'A';   

    for(i = 1; i <= n; i++) {       
        for(j = 1; j <= i; j++) {  
            printf("%c ", ch);
            ch++;
            if(ch > 'Z') ch = 'A'; 
        }
        printf("\n");
    }

    getch();
}
