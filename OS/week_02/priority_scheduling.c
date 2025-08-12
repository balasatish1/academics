#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n, temp;
    int *process_number, *arrival_time, *burst_time, *waiting_time, *turn_around_time, *completion_time, *priority;
    float total_waiting_time = 0, total_TAT = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    process_number = (int *)calloc(n, sizeof(int));
    arrival_time = (int *)calloc(n, sizeof(int));
    burst_time = (int *)calloc(n, sizeof(int));
    waiting_time = (int *)calloc(n, sizeof(int));
    turn_around_time = (int *)calloc(n, sizeof(int));
    completion_time = (int *)calloc(n, sizeof(int));
    priority = (int *)calloc(n, sizeof(int));

    printf("Enter priorities: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &priority[i]);
        process_number[i] = i + 1; 
    }

    printf("Enter arrival times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arrival_time[i]);
    printf("Enter burst times: ");
    for (i = 0; i < n; i++)
        scanf("%d", &burst_time[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (priority[j] > priority[j + 1]) {
                temp = priority[j];
                priority[j] = priority[j + 1];
                priority[j + 1] = temp;

                temp = arrival_time[j];
                arrival_time[j] = arrival_time[j + 1];
                arrival_time[j + 1] = temp;

                temp = burst_time[j];
                burst_time[j] = burst_time[j + 1];
                burst_time[j + 1] = temp;

                temp = process_number[j];
                process_number[j] = process_number[j + 1];
                process_number[j + 1] = temp;
            }
        }
    }

    waiting_time[0] = 0;
    turn_around_time[0] = burst_time[0];
    completion_time[0] = arrival_time[0] + turn_around_time[0];
    for (i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
        turn_around_time[i] = waiting_time[i] + burst_time[i];
        completion_time[i] = arrival_time[i] + turn_around_time[i];
    }

    printf("\nP\tPri\tAT\tBT\twaiting_time\tTAT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d", process_number[i], priority[i], arrival_time[i], burst_time[i], waiting_time[i], turn_around_time[i]);
        total_waiting_time += waiting_time[i];
        total_TAT += turn_around_time[i];
    }
   
    printf("\nTotal Waiting Time: %.2f", total_waiting_time);
    printf("\nTotal Turn Around Time: %.2f", total_TAT);

    printf("\nAverage Waiting Time: %.2f", total_waiting_time / n);
    printf("\nAverage Turnaround Time: %.2f\n", total_TAT / n);

    free(process_number);
    free(arrival_time);
    free(burst_time);
    free(waiting_time);
    free(turn_around_time);
    free(completion_time);
    free(priority);

    return 0;
}
