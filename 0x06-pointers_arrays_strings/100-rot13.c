#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
    int i;
    char c;

    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
        {
            c = s[i] + 13;
        }
        else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
        {
            c = s[i] - 13;
        }
        else
        {
            c = s[i];
        }

        s[i] = c;
    }

    return s;
}

