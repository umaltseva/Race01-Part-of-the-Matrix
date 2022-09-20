#include "../inc/part_of_the_matrix.h"

bool check_operand(char *operand) {
    if (mx_strlen(operand) == 0) {
        return false;
    }

    if (operand[0] == '-') {
        if (mx_strlen(operand) == 1) {
            return false;
        }
        operand++;
    }

    for (int i = 0; i < mx_strlen(operand); i++) {
        if (operand[i] != '?' && !mx_isdigit(operand[i])) {
            return false;
        }
    }
    return true;
}
