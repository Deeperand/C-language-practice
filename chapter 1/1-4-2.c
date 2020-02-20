#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main() {
    // var define
        double r, h;
    // function claim
        double circle_perimeter(double);
        double circle_area(double);
        double ball_area(double);
        double ball_volume(double);
        double cylinder_volume(double, double);

    // input
        printf("input radius : "); scanf("%lf", &r);
        printf("input height : "); scanf("%lf", &h);

    // output
        printf("\n============ out put ================\n\n");
        printf("circle's perimeter : %lf;\n", circle_perimeter(r));
        printf("circle's area : %lf;\n", circle_area(r));
        printf("ball's surface area : %lf;\n", ball_area(r));
        printf("ball's volume : %lf;\n", ball_volume(r));
        printf("cylinder's volume : %lf;\n", cylinder_volume(r, h));

    return 0;
}


// function define
    double circle_perimeter(double r) {
        return 2.0 * PI * r;
    }

    double circle_area(double r) {
        return PI * pow(r, 2);
    }

    double ball_area(double r) {
        return 4.0 * PI * pow(r, 2);
    }

    double ball_volume(double r) {
        return 4.0 / 3.0 * PI * pow(r, 3);
    }

    double cylinder_volume(double r, double h) {
        return h * PI * pow(r, 2);
    }
