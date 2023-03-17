#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int x1 = *(int*)a;
    int x2 = *(int*)b;
    if (x1 > x2)
        return 1;
    else if (x1 < x2)
        return -1;
    else
        return 0;
}

int main() {
    int x[3][3] = {{2, 5, 7}, {2, 9, 4}, {9, 8, 1}};

    // Sort the elements in ascending order
    for (int row = 0; row < 3; row++) {
        qsort(x[row], 3, sizeof(int), compare);
    }

    // Print the sorted array
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%i\t", x[row][col]);
        }
        printf("\n");
    }

    return 0;
}
