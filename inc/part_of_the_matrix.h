#pragma once 

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

enum e_error {
    INCORRECT_OPERATION,
    INCORRECT_OPERAND,
    INCORRENT_RESULT
};

bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);
long long mx_pow(long long n, unsigned int pow);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(long long n);
void mx_printstr(const char *s);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);
int mx_strlen(const char *s);
void see_error(enum e_error er, char *str);
void check_minus(char *operand1, char *operand2, char *result);
bool check_template(long long number, char *template);
bool check_operation(char *operation);
bool check_operand(char *operand);
void print_result(char *operand1, char operation, char *operand2, char *result);



