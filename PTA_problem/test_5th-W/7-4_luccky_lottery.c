#include <stdio.h>

int main() {
    int num[100], N, sum_1, sum_2;
    int i, j; // loop parameter

    scanf("%d", &N);

    if (N <= 100) {
        for (i = 1; i <= N; i++) {
            scanf("%d", &num[i]);
        }

        for (i = 1; i <= N; i++) {
            sum_1 = sum_2 = 0;

            // calculate sum_1
            for (j = 1; j <= 3; j++) {
                sum_1 += num[i] % 10;
                num[i] /= 10;
            }

            for (j = 1; j <= 3; j++) {
                sum_2 += num[i] % 10;
                num[i] /= 10;
            }

            if (sum_1 == sum_2) {
                printf("You are lucky!\n");
            }
            else {
                printf("Wish you good luck.\n");
            }
        }
    }

    return 0;
}
