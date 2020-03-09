#include  <stdio.h>
#include  <math.h>

int main() {
    double t = 3.0, g = 10.0;
    double height;

    height = 0.5 * g * pow(t, 2);
    printf("height = %.2lf\n", height);

    return 0;
}
