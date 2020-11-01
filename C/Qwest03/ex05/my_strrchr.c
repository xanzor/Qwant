#include <string.h>

char *my_strrchr(char *param_1, char param_2)
{
  char *s = NULL;
  while (*param_1)
  {
    if (*param_1 == (char)param_2)
      s = (char *)param_1;
    param_1++;
  }
  if (*param_1 == (char)param_2)
    s = (char *)param_1;
  return (s);
}