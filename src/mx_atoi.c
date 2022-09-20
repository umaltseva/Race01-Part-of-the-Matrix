#include "../inc/part_of_the_matrix.h"

int mx_atoi(const char *str) {
    long int res = 0;
    int sign = 1;
    int a = 0;
    
    while (mx_isspace(str[a])) {
            a++;
        }
    if (str[a] == '-' || str[a] == '+')  {
        if (str[a] == '-') {
        sign = -1;
        }
        ++a;
    }
    for (; mx_isdigit(str[a]); a++) {
        if (9223372036854775807 / (str[a] / 10) < res) {
            if (sign == -1)
                return 0;
            else
                return -1;
        }
        else
            res = res * 10;
        if (9223372036854775807 - (str[a] - 48) < res) {
            if (sign == -1)
                return 0;
            else
                return -1;
        }
        else
            res += str[a] - '0';
    }
    return sign * res;
}


