
#include <stdio.h>

void swap(int arr[], int pos)
{
  int temp = arr[pos];
  arr[pos] = arr[pos - 1];
  arr[pos - 1] = temp;
}

void insertion_sort(int arr[], int N)
{

  for (int i = 1; i < N; i++)
  {
    int key = arr[i];
    int pos = i;

    while (pos > 0 && arr[pos - 1] > arr[pos])
    {
      swap(arr, pos);
      pos--;
    }
  }
}

int main()
{
  int arr[] = {5, 4, 3, 2, 1, 0, -1};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertion_sort(arr, size);

  printf("Sorted Array : \n");

  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }
  return 0;
}
