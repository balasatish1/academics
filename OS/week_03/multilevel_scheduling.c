#include <stdio.h>

int main() {

  int p[20], bt[20], su[20], wt[20], tat[20];
  int i, k, n, temp;
  float wtavg, tatavg;

  printf("Enter the number of process: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    p[i] = i + 1;
    printf("Enter the burst time of process %d: ", i + 1);
    scanf("%d", &bt[i]);
    printf("System/User process (0/1): ");
    scanf("%d", &su[i]);
  }


  for (i = 0; i < n - 1; i++) {
    for (k = i + 1; k < n; k++) {
      if (su[i] > su[k]) {
        temp = p[i];
        p[i] = p[k];
        p[k] = temp;

        temp = bt[i];
        bt[i] = bt[k];
        bt[k] = temp;

        temp = su[i];
        su[i] = su[k];
        su[k] = temp;
      }
    }
  }

  wt[0] = 0;
  tat[0] = bt[0];
  wtavg = 0;
  tatavg = bt[0];

  for (i = 1; i < n; i++) {
    wt[i] = wt[i - 1] + bt[i - 1];
    tat[i] = wt[i] + bt[i];
    wtavg += wt[i];
    tatavg += tat[i];
  }

  printf("\n Process\t System/User\t Burst Time\t Waiting Time\t Turnaround Time\n");

  for (i = 0; i < n; i++) {
    printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", p[i], su[i], bt[i], wt[i], tat[i]);
  }

  printf("\n Average waiting Time: %.2f", wtavg / n);
  printf("\n Average Turnaround Time: %.2f\n", tatavg / n);

  return 0;
}