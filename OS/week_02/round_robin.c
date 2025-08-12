#include <stdio.h>
#include <string.h>

void main()
{
    int N = 5;
    char process_name[10][5];
    int et[10], waiting_time[10], process_time[10];
    int time_quantum = 3, count, rt, i, j, t, found = 0, m;
    int total_waiting_time = 0;
    float avg_waiting_time;

    for (i = 0; i < N; i++)
    {
        printf("enter the process name : ");
        scanf("%s", process_name[i]);
        printf("enter the processing time : ");
        scanf("%d", &process_time[i]);
    }

    m = N;
    waiting_time[0] = 0;
    i = 0;

    do
    {
        if (process_time[i] > time_quantum)
        {
            rt = process_time[i] - time_quantum;
            strcpy(process_name[N], process_name[i]);
            process_time[N] = rt;
            et[i] = time_quantum;
            N++;
        }
        else
        {
            et[i] = process_time[i];
        }
        i++;
        waiting_time[i] = waiting_time[i - 1] + et[i - 1];
    } while (i < N);

    count = 0;
    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j <= N; j++)
        {
            if (strcmp(process_name[i], process_name[j]) == 0)
            {
                count++;
                found = j;
            }
        }
        if (found != 0)
        {
            waiting_time[i] = waiting_time[found] - (count * time_quantum);
            count = 0;
            found = 0;
        }
    }

    for (i = 0; i < m; i++)
    {
        total_waiting_time += waiting_time[i];
    }

    avg_waiting_time = (float)total_waiting_time / m;

    printf("\nP_Name\tP_time\tW_time");

    for (i = 0; i < m; i++)
    {
        printf("\n%s\t%d\t%d", process_name[i], process_time[i], waiting_time[i]);
    }
    printf("\ntotal waiting time %d\n", total_waiting_time);
    printf("total avgtime %f", avg_waiting_time);
}
