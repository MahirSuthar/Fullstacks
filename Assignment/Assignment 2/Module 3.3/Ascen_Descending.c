#include <stdio.h>
#include <conio.h>
void sortArray(int arr[], int n, int order) {
    int i, j, temp;  // declare variables at top
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(order == 1) { // ascending
                if(arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } else if(order == 2) { // descending
                if(arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;  // declare variable at top
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void main() {
    int n1, n2, choice;
    int i;  // declare variable at top

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[100];  // max size 100 for safety
    printf("Enter %d elements of first array: ", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[100];  // max size 100
    printf("Enter %d elements of second array: ", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Ask user for sorting order
    printf("Choose sorting order:\n1. Ascending\n2. Descending\nEnter choice (1 or 2): ");
    scanf("%d", &choice);

    // Sort arrays
    sortArray(arr1, n1, choice);
    sortArray(arr2, n2, choice);

    // Print sorted arrays
    printf("Sorted first array: ");
    printArray(arr1, n1);
    printf("Sorted second array: ");
    printArray(arr2, n2);
    getch();
}
