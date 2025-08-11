
#include <stdio.h>

void swap(int arr_1[], int arr_2[], int index) {
  int temp = arr_1[index];
  arr_1[index] = arr_1[index + 1];
  arr_1[index + 1] = temp;

  temp = arr_2[index];
  arr_2[index] = arr_2[index + 1];
  arr_2[index + 1] = temp;
}

int main() {
  int N = 0;
  printf("Enter number of jobs: ");
  scanf("%d", &N);

  int burst_time[N];
  int process_number[N];
  int waiting_time[N];
  float total_waiting_time = 0.0;

  printf("Enter burst time for corresponding jobs\n");
  for (int i = 0; i < N; i++) {
    printf("Process - %d: ", i);
    scanf("%d", &burst_time[i]);
    process_number[i] = i;
  }

  for (int i = 0; i < N - 1; i++) {
    int is_swapped = 0;
    for (int j = 0; j < N - 1 - i; j++) {
      if (burst_time[j] > burst_time[j + 1]) {
        swap(burst_time, process_number, j);
        is_swapped = 1;
      }
    }
    if (!is_swapped) break;
  }

  waiting_time[0] = 0;
  for (int i = 1; i < N; i++) {
    waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
    total_waiting_time += waiting_time[i];
  }

  printf("\n");

  for (int i = 0; i < N; i++) {
    printf("waiting time of process %d : %d\n", process_number[i], waiting_time[i]);
  }

  printf("\ntotal waiting time: %f\n", total_waiting_time);
  printf("average waiting time: %f\n", total_waiting_time / N);

  printf("\nGantt Chart\n\n");

  for (int i = 0; i < N; i++) {
    printf("|P%d\t", process_number[i]);
  }

  printf("|\n-----------------------------------------\n");

  for (int i = 0; i < N; i++) {
    printf("%d\t", waiting_time[i]);
  }
  printf("%d\t", (int)total_waiting_time);

  return 0;
}
