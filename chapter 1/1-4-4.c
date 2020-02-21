#include <stdio.h>
#define size_clo 3
#define size_row 2

int main() {
    double matrix[size_row][size_clo] = {{1.0, 1.0, 30.0}, {4.0, 2.0, 90.0}};
    double main_element, sub_main_element;
    char name[2][10] = {"chicken", "rabbit"};
    int i, j, k;

    // generate triangle matrix
    for (i=0; i < (size_row - 1); i++) {
        main_element = matrix[i][i];

        // iterate cross column
        for (j=(i+1); j<= (size_clo - 1); j++) {
            matrix[i][j+1] = matrix[i][j+1] / main_element;
        }

        // iterate cross row
        for (j=(i+1); j <= (size_row - 1); j++) {
            sub_main_element = matrix[j][i];

            // iterate cross column
            for (k=(i+1); k<= (size_clo - 1); k++) {
                matrix[j][k] = matrix[j][k] - matrix[i][k] * sub_main_element;
            }
        }
    }

    matrix[size_row-1][size_clo-1] = matrix[size_row-1][size_clo-1] / matrix[size_row-1][size_clo-2];

    // solve the triangle matrix
    for (i=(size_row - 1); i >= 0; i--) {
        for (j=(i-1); j >= 0; j--) {
            matrix[j][size_clo - 1] = matrix[j][size_clo - 1] - matrix[i][size_clo - 1] * matrix[j][j + 1];
        }
    }

    printf("\n============ out put ================\n\n");
    for (i = 0; i <= (size_row - 1); i++) {
        printf("number of %s: %d\n", name[i], (int)matrix[i][size_clo - 1]);
    }
}
