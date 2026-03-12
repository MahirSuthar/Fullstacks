#include <stdio.h>
#include <conio.h>

void main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;      // last digit
        rev = rev * 10 + rem; // append last digit to reverse
        num = num / 10;       // remove last digit
    }

    printf("Reverse number = %d\n", rev);
	
	getch();
}
