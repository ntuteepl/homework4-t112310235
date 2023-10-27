#define ARRAYSIZE k
#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    int sd[N][2];
   /* int s[N], d[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &s[i], &d[i]);
    }*/
     for (int i = 0; i < N; i++) {
        scanf("%d %d", &sd[i][0], &sd[i][1]);
    }


    // 使用冒泡排序对订单数据按开始时间 s 进行排序
   /* for (int i = 0; i < N - 1; i++) {
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
    */
      for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (sd[j][0] > sd[j + 1][0]||(sd[j][0] == sd[j + 1][0] && sd[j][1] > sd[j+1][1])) {
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
        int cars=1;

        for (int i=0;i<N;i++){
            for (int j=0;j<N;j++){

                    if(j<i)  {
                        j=i+1;
                    }

        if(sd[i][0]==sd[j+1][0]){
            cars++;

            break;
        }
        //   開始<結束
        if(sd[j+1][0]<sd[i][1]){


                cars++;
        }
        //    開始>結束
         if(sd[j+1][0]>=sd[i][1]){
                cars=cars;
        }

    }
}


  /* for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
         if(j<i)  {
            j=i+1;
         }

        if(s[i]==s[j]){
            cars++;
            break;
        }
        //   開始<結束
        if(s[j+1]<d[i]){
                cars++;
        }
        //    開始>結束
         if(s[j+1]>=d[i]){
                cars=cars;
        }


    }
    }*/

        printf("%d\n", cars);
        int driver;
        for(driver=1;driver <= cars;driver++){
              printf("Driver %d's schedule is\n", driver );

           // for(i=0;)
        }



    // 输出排序后的订单数据
   /* for (int i = 0; i < N; i++) {
        printf("%d %d\n", s[i], d[i]);
    }
    */
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", sd[i][0], sd[i][1]);
    }


    return 0;
}
