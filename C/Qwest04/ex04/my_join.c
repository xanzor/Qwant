#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include <string.h>
typedef struct s_string_array
{
  int size;
  char **array;
} string_array;
#endif

char *my_join(string_array *param_1, char *param_2)
{
  char *strings = malloc(sizeof(char));
  int arr_size = param_1->size - 1;

  for (int i = 0; i < arr_size; i++)
  {
    strings = strcat(strings, param_1->array[i]);
    strings = strcat(strings, param_2);
  }
  strings = strcat(strings, param_1->array[arr_size]);

  return strings;
}