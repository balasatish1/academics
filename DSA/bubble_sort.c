
#include <stdio.h>

void bubble_sort(int arr[], int N) {

  for (int i = 0; i < N - 1; i++) {

    int is_swapped = 0;
    for (int j = 0; j < N - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        is_swapped = 1;
      }
    }

    if (!is_swapped) {
      break;
    }

  }
}

int main() {

  FILE *file = fopen("input.txt", "r");

  if (file == NULL) {
    printf("Error occured in reading the file 'input.txt' !!");
    return 0;
  }

  int size = 0;
  fscanf(file, "%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++) {
    fscanf(file, "%d", &arr[i]);
  }

  bubble_sort(arr, size);

  printf("Sorted Array : ");

  for (int i = 0; i < size; i++) {
    printf("%d  ", arr[i]);
  } 

  printf("\n");
  return 0;
}
