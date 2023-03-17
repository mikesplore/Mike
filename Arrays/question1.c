#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array:\n", n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("Elements in array are:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
