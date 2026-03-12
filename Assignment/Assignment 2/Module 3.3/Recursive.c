#include <stdio.h>
#include <conio.h>

void reverse(char str[], int index) {
    if(str[index] == '\0')
        return;
    
    reverse(str, index + 1);   
    printf("%c", str[index]);  
}

void main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str); 
    
    printf("Reversed string: ");
    reverse(str, 0);  
    printf("\n");
    getch();
}
