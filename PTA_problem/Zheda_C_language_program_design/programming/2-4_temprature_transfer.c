#include <stdio.h>
int main() {
    int temp_F = 150, temp_C;

    temp_C = 5 * (temp_F - 32) / 9;
    printf("fahr = 150, celsius = %d\n", temp_C);

    return 0;
}
