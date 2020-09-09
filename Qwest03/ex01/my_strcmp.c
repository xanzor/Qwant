#include <stdio.h>
#include <string.h>

int my_strcmp(char *param_1, char *param_2)
{
  int i = 0;
  while (param_1[i] == param_2[i] && param_1[i] != '\0' && param_2[i] != '\0')
    i++;
  return (param_1[i] - param_2[i]);
}

// int main() {
//   char *s1 = "Hedddello";
//   char *s2 = "Hello";

//   printf("my_strcmp -> %d\n", my_strcmp(s1, s2));
//   return 0;
// }