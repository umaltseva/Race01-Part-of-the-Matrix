#include "../inc/part_of_the_matrix.h"

bool check_template(long long number, char *template) {
    if (template[0] == '-' && number >= 0) {
        return false;
    }

    if (template[0] != '-' && number < 0) {
        return false;
    }

    if (number < 0) {
        template++;
        number = number * -1;
    }

    for (int i = mx_strlen(template) - 1; i >= 0; i--) {
        if (template[i] != '?' && number % 10 != template[i] - 48) {
            return false;
        }
        number /= 10;
    }

    return number == 0;
}



