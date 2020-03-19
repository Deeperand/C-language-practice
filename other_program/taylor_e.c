#include <stdio.h>
#include <math.h>
int main() {
    double math_e, factorial, item = 1.0, i = 1.0;

    factorial = i;
    math_e = item;

    while (item > 1E-6) {
        // add to item first
        item = 1.0/factorial;
        math_e += item;

        i++;
        factorial *= i;
    }

    printf("%lf\n", math_e);

    return 0;
}

