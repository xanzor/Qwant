#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_print_alphabet(void)
{

	char letter = 97;

	while (letter <= 122)
	{
		my_putchar(letter);
		letter++;
	}
	my_putchar('\n');
}
