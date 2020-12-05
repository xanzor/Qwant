#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_print_reverse_alphabet()
{
	char alphabet = 122;

	while (alphabet >= 97)
	{
		my_putchar(alphabet);
		alphabet--;
	}
	my_putchar('\n');
}
