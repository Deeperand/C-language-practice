#include <stdio.h>
int main() {
    int num_1, num_2, num_3, flag = 1;
    char operator;

    scanf("%d %c %d", &num_1, &operator, &num_2);
    switch (operator) {
        case '+':
            num_3 = num_1 + num_2;
            break;
        case '-':
            num_3 = num_1 - num_2;
            break;
        case '*':
            num_3 = num_1 * num_2;
            break;
        case '/':
            num_3 = num_1 / num_2;
            break;
        case '%':
            num_3 = num_1 % num_2;
            break;
        default:
            flag = 0;
    }

    switch (flag) {
        case 1:
            printf("%d\n", num_3);
            break;
        case 0:
            printf("ERROR");
            break;
    }

    return 0;
}
