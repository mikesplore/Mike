#include <stdio.h>
#include <string.h>

int main() {
    char name1[50], name2[50];
    float marks1[5], marks2[5], mean1, mean2;
    int i;

    // prompt user to enter names
    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);

    // prompt user to enter marks for various subjects
    printf("Enter marks for %s: \n", name1);
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks1[i]);
    }

    printf("Enter marks for %s: \n", name2);
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks2[i]);
    }

    // calculate mean marks for each student
    mean1 = (marks1[0] + marks1[1] + marks1[2] + marks1[3] + marks1[4]) / 5;
    mean2 = (marks2[0] + marks2[1] + marks2[2] + marks2[3] + marks2[4]) / 5;

    // determine grade based on mean marks
    if (mean1 >= 90) {
        printf("%s has grade A\n", name1);
    } else if (mean1 >= 80) {
        printf("%s has grade B\n", name1);
    } else if (mean1 >= 70) {
        printf("%s has grade C\n", name1);
    } else if (mean1 >= 60) {
        printf("%s has grade D\n", name1);
    } else {
        printf("%s has grade F\n", name1);
    }

    if (mean2 >= 90) {
        printf("%s has grade A\n", name2);
    } else if (mean2 >= 80) {
        printf("%s has grade B\n", name2);
    } else if (mean2 >= 70) {
        printf("%s has grade C\n", name2);
    } else if (mean2 >= 60) {
        printf("%s has grade D\n", name2);
    } else {
        printf("%s has grade F\n", name2);
    }

    return 0;
}