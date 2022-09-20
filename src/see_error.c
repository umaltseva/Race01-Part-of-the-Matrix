#include "../inc/part_of_the_matrix.h"

void see_error(enum e_error er, char *str) {
    switch (er)
    {
    case INCORRECT_OPERATION:
        mx_printerr("Invalid operation: ");
        break;
    case INCORRECT_OPERAND:
        mx_printerr("Invalid operand: ");
        break;
    case INCORRENT_RESULT:
        mx_printerr("Invalid result: ");
        break;
    default:
        break;
    }
    mx_printerr(str);
    mx_printerr("\n");
    exit(0);
} 
