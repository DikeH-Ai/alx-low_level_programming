#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '*'))
		return (1);
	else if ((*s1 == '\0') && ((*s2 != '*') || (*s2 != '\0') ))
		return (0);
	else if ((*s2 == '*') && (*(s2 + 1) == '\0'))
		return (1);
	else if ((*s2 == '*') && (*s2 + 1 != '\0'))
	{
		if (s1 != (s2 + 1))
			return wildcmp((s1 + 1), s2);
	}
	else if (*s1 != *s2)
		return (0);
	else
		return wildcmp((s1 + 1), (s2 + 1));
	return (0);
}
