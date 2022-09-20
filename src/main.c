#include "../inc/part_of_the_matrix.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]");
        mx_printerr("\n");
        exit(-1);
    }

    char *operand1 = mx_strtrim(argv[1]);
    char *operand2 = mx_strtrim(argv[3]);
    char *operator = mx_strtrim(argv[2]);

    if (!check_operation(operator)) {
        see_error(INCORRECT_OPERATION, operator);
    }
    if (!check_operand(operand1)) {
        see_error(INCORRECT_OPERAND, operand1);
    }
    if (!check_operand(operand2)) {
        see_error(INCORRECT_OPERAND, operand2);
    }
    char *result = mx_strtrim(argv[4]);
    if (!check_operand(result)) {
        see_error(INCORRENT_RESULT, result);
    }

    print_result(operand1, operator[0], operand2, result);
    free(operand1);
    free(operator);
    free(operand2);
    free(result);
}


