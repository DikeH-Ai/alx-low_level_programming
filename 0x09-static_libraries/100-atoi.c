#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 (
 *
 *
 *
 */
#include <limits.h>

int _atoi(char *s)
{
	int sign = 1, result = 0;
	while (*s)
	{
        if (*s == '-') {
            sign = -1;
        } else if (*s == '+') {
            sign = 1;
        } else if (*s >= '0' && *s <= '9') {
            int digit = *s - '0';
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            result = result * 10 + digit;
        } else if (result != 0) {
            break;
        }
        s++;
    }
    return sign * result;
}

