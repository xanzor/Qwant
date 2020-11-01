#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
  int size;
  int *array;
} integer_array;
#endif

bool my_is_sort(integer_array *param_1)
{
  for (int i = 0; i < param_1->size - 2; i++)
  {
    if (param_1->array[i] <= param_1->array[i + 1] && param_1->array[i + 1] <= param_1->array[i + 2] ||
        param_1->array[i] >= param_1->array[i + 1] && param_1->array[i + 1] >= param_1->array[i + 2])
    {
    }
    else
    {
      return false;
    }
  }
  return true;
}

// int main() {
//     int my_array[]= {};
//     int *p= my_array;
//    integer_array anz;
//     anz.array= my_array;
//     anz.size = 0;
//     my_is_sort(&anz);
// }

// for (int i = 1; i < param_1->size - 1; i++) {
//         for (int j = (param_1->size - 1); j > i; j--){
//             if (param_1->array[j - 1] > param_1->array[j]) {
//                 int sorted = param_1->array[j - 1];
//                 param_1->array[j - 1] = param_1->array[j];
//                 param_1->array[j] = sorted;
//             }
//             return true;
//         }
//     }
//     return false;