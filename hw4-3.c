#define ARRAYSIZE k
#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);

    int s[N], d[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &s[i], &d[i]);
    }

    // 使用冒泡排序对订单数据按开始时间 s 进行排序
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (s[j] > s[j + 1] || (s[j] == s[j+1] && d[j] > d[j+1])) {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;

                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
        }
    }
    }



    int cars;
    for (int i=0;i<N;i++){
    for (int j=0;j<N;j++){
         if(j<i)  {
            j=i+1;
         }

        if(s[i]==s[j]){
            cars++;
            break;
        }
        if(s[j+1]<d[i]){
                cars++;
        }
         if(s[j+1]>=d[i]){
                cars=cars;
        }

    }
    }

        printf("%d\n", cars);

    // 输出排序后的订单数据
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", s[i], d[i]);
    }

    return 0;
}
