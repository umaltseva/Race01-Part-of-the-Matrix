#include "../inc/part_of_the_matrix.h"

void print_result(char *operand1, char operation, char *operand2, char *result) {
    long long start1 = 0;
    long long finish1 = mx_pow(10, mx_strlen(operand1));
    long long start2 = 0;
    long long finish2 = mx_pow(10, mx_strlen(operand2));

    if (operation == '?') {
        print_result(operand1, '+', operand2, result);
        print_result(operand1, '-', operand2, result);
        print_result(operand1, '*', operand2, result);
        print_result(operand1, '/', operand2, result);
        return;
    }

    if (operand1[0] == '-') {
        start1 = 1 - mx_pow(10, mx_strlen(operand1));
        finish1 = 0;
    }
    if (operand2[0] == '-') {
        start2 = 1 - mx_pow(10, mx_strlen(operand2));
        finish2 = 0;
    }

    for (long long i = start1; i < finish1; i++) {
        if (!check_template(i, operand1)) {
            continue;
        }
        for (long long j = start2; j < finish2; j++) {
            if (!check_template(j, operand2)) {
                continue;
            }

            long long res = 0;

            switch (operation)
            {
            case '+':
                res = i + j;     
                break;
            case '-':
                res = i - j;
                break;
            case '*':
                res = i * j;
                break;
            case '/':
                if (j == 0) {
                    continue;
                }
                res = i / j;
                break;
            default:
                break;
            }
            if (!check_template(res, result)) {
                continue;
            }

            mx_printint(i);
            mx_printchar(' ');
            mx_printchar(operation);
            mx_printchar(' ');
            mx_printint(j);
            mx_printstr(" = ");
            mx_printint(res);
            mx_printchar('\n');
        }
    }
}



