#include <stdio.h>
#include <conio.h>

void main() {
    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) num = -num;  // Convert negative to positive

    while(num != 0) {
        rem = num % 10;    // Get last digit
        sum += rem;        // Add to sum
        num = num / 10;    // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    getch();
}
