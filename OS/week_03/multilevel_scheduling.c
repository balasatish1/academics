/*
                    Week - 03 (Multilevel scheduling)

  Name: Malladi Bala Satish
  Roll: 325103311L03
*/



#include <stdio.h>

int main() {

  int process_id[20], burst_time[20], user_type[20];
  int waiting_time[20], tat[20], n;
  float tot_waiting_time, tot_tat;

  printf("Enter the number of process: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    process_id[i] = i + 1;
    printf("Enter the burst time of process %d: ", i + 1);
    scanf("%d", &burst_time[i]);
    printf("System/User process (0/1): ");
    scanf("%d", &user_type[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int k = i + 1; k < n; k++) {
      if (user_type[i] > user_type[k]) {
        int temp = process_id[i];
        process_id[i] = process_id[k];
        process_id[k] = temp;

        temp = burst_time[i];
        burst_time[i] = burst_time[k];
        burst_time[k] = temp;

        temp = user_type[i];
        user_type[i] = user_type[k];
        user_type[k] = temp;
      }
    }
  }

  waiting_time[0] = 0;
  tat[0] = burst_time[0];
  tot_waiting_time = 0;
  tot_tat = burst_time[0];

  for (int i = 1; i < n; i++) {
    waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
    tat[i] = waiting_time[i] + burst_time[i];
    tot_waiting_time += waiting_time[i];
    tot_tat += tat[i];
  }

  printf("\n Process\t System/User\t Burst Time\t Waiting Time\t Turnaround Time\n");

  for (int i = 0; i < n; i++) {
    printf("\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", process_id[i],
      user_type[i],
      burst_time[i],
      waiting_time[i],
      tat[i]
    );
  }

  printf("\n Average waiting Time: %.2f", tot_waiting_time / n);
  printf("\n Average Turnaround Time: %.2f\n", tot_tat / n);

  return 0;
}