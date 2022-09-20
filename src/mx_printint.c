#include "../inc/part_of_the_matrix.h"

void mx_printint(long long n) {
    long long num = n;

    if (num < 0)
    {
        mx_printchar('-');
        num *= -1;
    }
    if (num > 9)
        mx_printint(num / 10);

    mx_printchar(num % 10 + 48);
}


