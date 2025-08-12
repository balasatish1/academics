#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n, temp;
    int *p, *at, *bt, *wt, *tat, *ct, *priority;
    float total_waiting_time = 0, total_TAT = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));
    at = (int *)calloc(n, sizeof(int));
    bt = (int *)calloc(n, sizeof(int));
    wt = (int *)calloc(n, sizeof(int));
    tat = (int *)calloc(n, sizeof(int));
    ct = (int *)calloc(n, sizeof(int));
    priority = (int *)calloc(n, sizeof(int));

    printf("Enter priorities: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &priority[i]);
        p[i] = i + 1; 
    }

    printf("Enter arrival times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &at[i]);2
P3      2       2       3       2       5
P1      3       0       1       5       6

    printf("Enter burst times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &bt[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (priority[j] > priority[j + 1]) {2
P3      2       2       3       2       5
P1      3       0       1       5       6
                temp = priority[j];
                priority[j] = priority[j + 1];
                priority[j + 1] = temp;

                temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;

                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;2
P3      2       2       3       2       5
P1      3       0       1       5       6

                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    wt[0] = 0;
    tat[0] = bt[0];
    ct[0] = at[0] + tat[0];2
P3      2       2       3       2       5
P1      3       0       1       5       6

    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        tat[i] = wt[i] + bt[i];
        ct[i] = at[i] + tat[i];
    }

    printf("\nP\tPri\tAT\tBT\tWT\tTAT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d", p[i], priority[i], at[i], bt[i], wt[i], tat[i]);
        total_waiting_time += wt[i];
        total_TAT += tat[i];
    }
    2
P3      2       2       3       2       5
P1      3       0       1       5       6
    printf("\nTotal Waiting Time: %.2f", total_waiting_time);
    printf("\nTotal Turn Around Time: %.2f", total_TAT);

    printf("\nAverage Waiting Time: %.2f", total_waiting_time / n);
    printf("\nAverage Turnaround Time: %.2f\n", total_TAT / n);

    free(p);
    free(at);
    free(bt);
    free(wt);
    free(tat);
    free(ct);
    free(priority);

    return 0;
}
