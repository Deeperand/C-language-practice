#include <stdio.h>

// you can change N to determine the length of side
#define N 4

int main() {
    char intri[N][2*(N-1)];
    int i, j, k;

    // initial each char as '\0' to avoid messy code
    for (i = 0; i <= N-1; i++) {
        for (j = 0; j <= 2*N-3; j++) {
            intri[i][j] = '\0';
        }
    }

    for (i = 0; i <= N-1; i++) {

        // generate string of each raw
        for (j = i; j <= 2*(N - 1) - i; j += 2) {

            if (j == i && i != 0) {

                // add space at the head of each raw
                for (k=0; k<j; k++) {
                    intri[i][k] = ' ';
                }
            }

            intri[i][j] = '*';
            intri[i][j+1] = ' ';
        }
        intri[i][j+1] = '\0';

        puts(intri[i]);
    }

    return 0;
}
