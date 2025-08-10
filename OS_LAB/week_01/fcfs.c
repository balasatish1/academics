/*

                    OS LAB - week-01(first come first serve)

Name: Malladi Bala Satish
Roll No: 325103311L03
Branch / Year / Sem: IT / II year / III sem
Academic Year: 2025 - 2026

*/

#include <stdio.h>

int main()
{
    char process_names[10][10];
    int burst_time[10];
    int waiting_time[10];
    int total_waiting_time = 0;
    float avg_waiting_time = 0;
    int i = 0, n = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter name of process - %d: ", i + 1);
        scanf("%s", process_names[i]);
        printf("Enter process time: ");
        scanf("%d", &burst_time[i]);
    }

    waiting_time[0] = 0;
    for (i = 1; i < n; i++)
    {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
        total_waiting_time += waiting_time[i];
    }

    avg_waiting_time = (float)total_waiting_time / n;

    printf("P_name\tP_time\tW_time\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%d\t%d\n", process_names[i], burst_time[i], waiting_time[i]);
    }

    printf("Total waiting time: %d\n", total_waiting_time);
    printf("Average waiting time: %d\n", avg_waiting_time);
    return 0;
}
