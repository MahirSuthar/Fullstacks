#include <iostream>
using namespace std;

// Template function to sort an array of any data type
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swapping elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to display the array
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sorting an Integer Array
    int intArr[] = {64, 34, 25, 12, 22};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Original Int Array: "; displayArray(intArr, n1);
    sortArray(intArr, n1);
    cout << "Sorted Int Array:   "; displayArray(intArr, n1);

    // Sorting a Float Array
    float floatArr[] = {3.5, 1.2, 4.8, 2.1, 0.5};
    int n2 = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "\nOriginal Float Array: "; displayArray(floatArr, n2);
    sortArray(floatArr, n2);
    cout << "Sorted Float Array:   "; displayArray(floatArr, n2);

    // Sorting a Character Array
    char charArr[] = {'z', 'a', 'm', 'c', 'b'};
    int n3 = sizeof(charArr) / sizeof(charArr[0]);
    cout << "\nOriginal Char Array: "; displayArray(charArr, n3);
    sortArray(charArr, n3);
    cout << "Sorted Char Array:   "; displayArray(charArr, n3);

    return 0;
}

