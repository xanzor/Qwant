#include <stdio.h>

char *my_strncpy(char *param_1, char *param_2, int param_3)
{
  int i = 0;

  while (param_2[i] != '\0' && i < param_3)
  {
    param_1[i] = param_2[i];
    i++;
  }

  while (param_1[i] < param_3)
  {
    param_1 = param_2;
  }
  return param_1;
}
