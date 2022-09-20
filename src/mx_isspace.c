#include "../inc/part_of_the_matrix.h"

bool mx_isspace(char c) {
   if (c == 32 || c == '\f' || c == '\n' 
	|| c == '\r' || c == '\t' || c == '\v') 
		return true;
    else
        return false;
}

