
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

    if (!is_swapped)
      break;
  }
}

int main() {
  int arr[] = {5, 4, 3, 2, 1};

  int size = sizeof(arr) / sizeof(arr[0]);

  bubble_sort(arr, size);

  printf("Sorted Array : ");
  for (int i = 0; i < size; i++) {
    printf("%d  ", arr[i]);
  }
  return 0;
}
