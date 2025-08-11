/*

                    OS LAB  week-01(first come first serve)

Name: Malladi Bala Satish
Roll No: 325103311L03
Branch / Year / Sem: IT / II year / III sem
Academic Year: 2025 - 2026

*/

#include <stdio.h>

int main() {

    int N = 0;
    printf("Enter number of processes: ");
    scanf("%d", &N);

    char process_name[N][10];
    int waiting_time[N];
    int burst_time[N];
    int total_waiting_time = 0;
    float avg_waiting_time = 0.0;

    for (int i = 0; i < N; i++) {
        printf("Enter name of process - %d: ", i + 1);
        scanf("%s", process_name[i]);
        printf("Enter burst time of process - %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    waiting_time[0] = 0;
    for (int i = 1; i < N; i++) {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
        total_waiting_time += waiting_time[i];
    }

    avg_waiting_time = (float)total_waiting_time / N;

    printf("P_Name\t|P_Time\t|W_Time\n");
    printf("-----------------------\n");
    for (int i = 0; i < N; i++) {
        printf("%s\t|%d\t|%d\n", process_name[i], burst_time[i], waiting_time[i]);
    }

    printf("Total waiting time: %d\n", total_waiting_time);
    printf("Average waiting time: %f\n", avg_waiting_time);

    return 0;
}
