#include <stdio.h>

int main() {
    int AP[6][3] = {
        {123, 456, 9000},
        {456, 789, 5000},
        {789, 888, 6000},
        {336, 558, 10000},
        {777, 666, 12000},
        {566, 221, 7000}
    };

    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int account, password;

        scanf("%d %d", &account, &password);
        int found = 0;
        for (int j = 0; j < 6; j++) {
            if (AP[j][0] == account && AP[j][1] == password) {
                printf("%d", AP[j][2]);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("error\n");
        }
    }

    return 0;
}
