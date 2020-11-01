
#include <unistd.h>

int my_putchar(char c)
{
	return write(1, &c, 1);
}

int my_putstr(char *s)
{
	int i = -1;

	while (s[++i] != '\0')
	{
		my_putchar(s[i]);
	}
	return 0;
}
