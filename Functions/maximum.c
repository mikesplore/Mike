#include <stdio.h>

int max(int* x, int* y) {
    if (*x > *y) {
        return *x;
    } else {
        return *y;
    }
}

int main() {
    int x, y;
    printf("Input two numbers: ");
    scanf("%d %d", &x, &y);

    int maximum = max(&x, &y);
    printf("The maximum number is %d\n", maximum);

    return 0;
}
