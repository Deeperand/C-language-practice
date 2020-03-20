#include <stdio.h>
int main() {
    char str;
    int i;
    int counter_letter = 0, counter_blank = 0, counter_digit = 0, counter_other = 0;

    for (i = 0; i < 10; i++) {
        str = getchar();
        if ( (str>='a' && str<='z') || (str>='A' && str<='Z') ) {
            counter_letter++;
        }
        else if (str == ' ' || str == '\n')
            counter_blank++;
        else if (str>='0' && str<='9')
            counter_digit++;
        else
            counter_other++;
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d\n", counter_letter, counter_blank, counter_digit, counter_other);

    return 0;
}
