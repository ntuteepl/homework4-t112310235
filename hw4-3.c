#define ARRAYSIZE 100

#include <stdio.h>

int main() {
    int n = 0;
    int sd[ARRAYSIZE][2];
    int t[ARRAYSIZE][2];
    int cars = 0; // 初始化为0
    while (scanf("%d %d", &sd[n][0], &sd[n][1]) != EOF) {
        n++;
    }

    // 冒泡排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sd[j][0] > sd[j + 1][0] || (sd[j][0] == sd[j + 1][0] && sd[j][1] > sd[j + 1][1])) {
                // Swap the rows if the first column element is out of order
                int temp1 = sd[j][0];
                int temp2 = sd[j][1];
                sd[j][0] = sd[j + 1][0];
                sd[j][1] = sd[j + 1][1];
                sd[j + 1][0] = temp1;
                sd[j + 1][1] = temp2;
            }
        }
    }
     for (int i = 0; i < n; i++)
     {
         t[i][0]=sd[i][0];
         t[i][1]=sd[i][1];
     }


    for (int i = 0; i < n; i++) {
        if (sd[i][0] != 0) { // Skip already processed rows
            cars++;
            int current_time = sd[i][1]; // 当前司机的时间表

            for (int j = i + 1; j < n; j++) {
                if (sd[j][0] >= current_time) {
                    // 当前任务可以分配给当前司机
                    current_time = sd[j][1];
                    sd[j][0] = 0; // 将任务标记为已分配
                }
            }
        }
    }

   printf("%d\n", cars);
   cars=0;
    for (int i = 0; i < n; i++) {
        if (t[i][0] != 0) { // Skip already processed rows
            cars++;
            printf("Driver %d's schedule is %d %d ", cars, t[i][0], t[i][1]);

            for (int j = i + 1; j < n; j++) {
                if (t[j][0] >= t[i][1]) {
                    // 当前任务可以分配给当前司机
                    printf("%d %d ", t[j][0], t[j][1]);
                    t[i][1] = t[j][1];
                    t[j][0]=0; // 更新当前司机的结束时间
                }
            }
            printf("\n");
        }
    }

    return 0;
}
