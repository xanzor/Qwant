#include <unistd.h>
#include <string.h>

   int my_putchar(char c)
    {
        while(1, &c, 1);
        return 0;
    }

int hidenp(char* param_1, char* param_2)
{

	int	a = 0;
	int	i = 0;
	int	j = 0;


	while (param_2[j] != '\0')
	{
		if (param_2[j] == param_1[i])
		{
			a++;
			i++;
			j++;
		}
		else
			j++;
	}
	if (a == strlen(param_1))
		return 1;
	else
		return 0;

}



//   int main(int argc, char **argv)
//   {
//       if (argc == 3)
//       {
//         if (hidenp(argv[1], argv[2]))
//   	my_putchar('1');
//         else
//   	my_putchar('0');
//       }
//     my_putchar('\n');
//     return (0);
//   }