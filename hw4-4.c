#define ARRAYSIZE 100

#include <stdio.h>

int main() {
    int n = 0;
    int sd[ARRAYSIZE][2];
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

    int cars = 0;
    for (int i = 0; i < n-1; i++) {
        if (sd[i][0] != 0) { // Skip already processed rows
            cars++;
            printf("Driver %d's schedule is %d %d ", cars, sd[i][0], sd[i][1]);

            for (int j = i + 1; j < n; j++) {
                if (sd[j][0] >= sd[i][1]) {
                    // 当前任务可以分配给当前司机
                    printf("%d %d ", sd[j][0], sd[j][1]);
                    sd[i][1] = sd[j][1]; // 更新当前司机的结束时间
                }
            }
            printf("\n");
        }
    }

    printf("%d\n", cars);

    return 0;
}
