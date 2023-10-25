#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bool prime[n];
    for (int j = 0; j < n; j++) {
        prime[j] = true; // 預設為質數

        for (int i = 2; i * i <= a[j]; i++) {
            if (a[j] % i == 0) {
                prime[j] = false;
                break; // 如果能被整除，就不需要再檢查了
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (prime[i]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
