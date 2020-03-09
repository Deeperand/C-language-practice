#include <stdio.h>

int main() {
    int temp_F, temp_C;

    printf("input temprature: "); scanf("%d", &temp_F);
    temp_C = 5 * (temp_F - 32) / 9;

    printf("Celsius = %d\n", temp_C);

    return 0;
}

