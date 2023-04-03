#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "our time is here our time is now";
    char *f;

    f = _strchr(s, 't');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
