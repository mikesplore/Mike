#include <stdio.h>

int main() {
    int n, i, j;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("The frequency of all elements of an array:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
