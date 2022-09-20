#include "../inc/part_of_the_matrix.h"

bool check_operation(char *operation) {
    if (mx_strlen(operation) != 1
        || (operation[0] != '+'
        && operation[0] != '-'
        && operation[0] != '*'
        && operation[0] != '/'
        && operation[0] != '?')) {
        return false;
    }

    return true;
}

