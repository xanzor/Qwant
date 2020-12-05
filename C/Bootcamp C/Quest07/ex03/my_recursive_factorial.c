#include <stdio.h>
#include <string.h>


char* rcapitalize(char* str)
{
    int i = 0;
     int j = strlen(str) - 1;

	while (str[i] != '\0')
	{
		if ((i == j || str[i + 1] == ' ') &&
				(str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] -= 32;
		}
		else if (!(i == j || str[i + 1] == ' ') &&
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);

}


//   int   main(void)
//   {
//     char str[] = "a anz QwAnT ffFfFFf";
  
//     printf("\n%s", rcapitalize(str));
//     return (0);
//   }