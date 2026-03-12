#include <stdio.h>
#include <conio.h>

void main() {
    int num, rem, max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) num = -num;  // Make number positive if negative

    while(num != 0) {
        rem = num % 10;       // Get last digit
        if(rem > max)         // Compare with current max
            max = rem;
        num = num / 10;       // Remove last digit
    }

    printf("Maximum digit = %d\n", max);

    getch();
}
