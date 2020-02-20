#include <stdio.h>
#include <string.h>
int main() {
    char str[3][20];
    int i;

    // creat str1
        str[0][0] = '/';
        for (i = 1; i <= 13; i++){
            str[0][i] = '*';
        }
        strcat(str[0], "\\");

    // creat str2
        strcpy(str[1], "\\*Programming*\\");

    // creat str3
        str[2][0] = '\\';
        for (i = 1; i <= 12; i++){
            str[2][i] = '*';
        }
        // str[2][i+1] = '/';
        strcat(str[2], "/");

    // output string
        for (i = 0; i <= 2; i++){
            puts(str[i]);
        }

    return 0;
}
