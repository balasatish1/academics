
#include <stdio.h>

void selection_sort(int arr[], int N) {

  for (int i = 0; i < N - 1; i++) {
    int min_index = i;

    for (int j = i + 1; j < N; j++) {
      if (arr[min_index] > arr[j])
        min_index = j;
    }

    int temp = arr[min_index];
    arr[min_index] = arr[i];
    arr[i] = temp;
  }

}

int main() {
  int arr[] = {5, 4, 3, 2, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  selection_sort(arr, size);

  printf("Sorted Array : ");
  for (int i = 0; i < size; i++) {
    printf("%d  ", arr[i]);
  }
  return 0;
}
