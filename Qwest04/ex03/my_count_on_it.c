#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include <stdlib.h>
#include <string.h>
typedef struct s_string_array
{
  int size;
  char **array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
  int size;
  int *array;
} integer_array;
#endif

integer_array *my_count_on_it(string_array *param_1)
{
  integer_array *anzor;

  for (int i = 0; i < anzor->size; i++)
  {
    anzor->array[i] = strlen(param_1->array[i]);
  }
  return anzor;
}