
#include <string.h>

char *my_strchr(char *param_1, char param_2)
{
  for (int i = 0; i < strlen(param_1); i++)
  {
    if (param_1[i] == param_2)
    {
      return &param_1[i];
    }
  }
  return NULL;
}

// char* my_strchr(char* param_1, char param_2)
// {

//     if (param_2 == '\0'){
// 		while (*param_1)
// 			param_1++;
// 		return ((char*)param_1);
// 	}

//     while (*param_1)
// 	{
// 		if (*param_1 == param_2)
// 			return ((char*)param_1);
// 		param_1++;
// 	}
// 	return (NULL);
// }