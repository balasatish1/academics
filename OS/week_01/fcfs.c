#include <stdio.h>

int main() {
    char p[10][5];
    int et[10], wt[10], tot = 0, i, n;
    float avg = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter process %d name: ", i + 1);
        scanf("%s", p[i]);
        printf("Enter process time: ");
        scanf("%d", &et[i]);
    }

    wt[0] = 0;
    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + et[i - 1];
        tot += wt[i];
    }

    avg = (float)tot / n;

    printf("P_name\tP_time\tW_time\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%d\t%d\n", p[i], et[i], wt[i]);
    }

    printf("Total waiting time = %d\nAverage waiting time = %.2f\n", tot, avg);
    return 0;
}
