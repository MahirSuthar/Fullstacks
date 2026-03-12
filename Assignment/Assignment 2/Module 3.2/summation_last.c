#include <stdio.h>
#include <conio.h>
void main() {
    int num, last, first;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) num = -num;  // Make positive if negative

    last = num % 10;          // Last digit

    // Find first digit
    first = num;
    while(first >= 10) {
        first = first / 10;
    }

    printf("Sum of first and last digit = %d\n", first + last);

    getch();
}
