#include<stdio.h>
int main() {
    int x, y, z;
    printf("the first int is: "); scanf("%d", &x);
    printf("the second int is: "); scanf("%d", &y);
    printf("the third int is: "); scanf("%d", &z);

    printf("\n============ out put ================\n\n");
    printf("sum value: %d\n", (x + y + z));
    printf("average value: %lf\n", (x+y+z)/3.0);
}
