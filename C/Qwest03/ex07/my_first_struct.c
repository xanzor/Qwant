#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
  int size;
  int *array;
} integer_array;
#endif

void my_first_struct(integer_array *param_1)
{
  printf("%d\n", param_1->size);

  for (int i = 0; i < param_1->size; i++)
  {
    printf("%d\n", param_1->array[i]);
  }
}
// int main(){
//     int my_array[]= {1, 2, 3};
//     int *p= my_array;
//    integer_array anzor;
//     anzor.array= my_array;
//     anzor.size = 3;
//     my_first_struct(&anzor);
// }