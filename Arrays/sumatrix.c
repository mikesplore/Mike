#include <stdio.h>

int main() {
  int arr1[2][2];
  int arr2[2][2];

  printf("Enter the elements in the first row:\n");
  for (int i = 0; i < 2; i++) {
    printf("Element %d: ", i);
    scanf("%d", &arr1[0][i]);
  }

  printf("Enter the elements in the second row:\n");
  for (int i = 0; i < 2; i++) {
    printf("Element %d: ", i);
    scanf("%d", &arr1[1][i]);
  }

  printf("The second matrix:\n");
  printf("Enter the elements in the first row:\n");
  for (int i = 0; i < 2; i++) {
    printf("Element %d: ", i);
    scanf("%d", &arr2[0][i]);
  }

  printf("Enter the elements in the second row:\n");
  for (int i = 0; i < 2; i++) {
    printf("Element %d: ", i);
    scanf("%d", &arr2[1][i]);
  }

  printf("The first matrix:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", arr1[i][j]);
    }
    printf("\n");
  }

  printf("The second matrix:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", arr2[i][j]);
    }
    printf("\n");
  }

  printf("The sum of the matrices:\n");
 
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
            printf("%d ", arr1[i][j] + arr2[i][j]);
    }
    printf("\n");
  }
  printf("The product of the matrices\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr1[i][j]*arr2[i][j]);}
            printf("\n");}

  return 0;
}
