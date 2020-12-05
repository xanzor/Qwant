#include <stdio.h>
#include <ctype.h>

char *my_upcase(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i] += 32);
	}
	return s;
}