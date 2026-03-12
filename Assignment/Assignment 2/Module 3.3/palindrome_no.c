#include <stdio.h>
#include <string.h>
#include <conio.h>

void main() {
    char str[50], rev[50];
    int i, j = 0, len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';

    printf("Reverse string: %s\n", rev);

    if(strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    getch();
}
