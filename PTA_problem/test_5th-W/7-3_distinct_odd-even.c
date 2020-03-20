#include <stdio.h>

int main() {
    int N, num, i;
    int counter_odd = 0, counter_even = 0;

    scanf("%d", &N);

    for (i = 1; i<= N; i++) {
        scanf("%d", &num);
        if (num%2 != 0) {
            counter_odd++;
        }
        else {
            counter_even++;
        }
    }

    printf("%d %d\n", counter_odd, counter_even);

    return 0;
}
