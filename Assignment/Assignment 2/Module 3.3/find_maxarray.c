#include <stdio.h>
#include <conio.h>

void main() {
    int arr[10], i, n, max;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i]; 
    }

    printf("Maximum number is: %d\n", max);
}
