#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include <stdio.h>
#include <string.h>
#include <unistd.h>
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

    int my_putchar(char c) {
        write(1, &c, 1);
        return 0;
    };

void my_print_words_array(string_array* param_1)
{
    for (int i = 0;i < param_1->size; i++) {
        write(1, param_1->array[i], strlen(param_1->array[i]));
        write(1, "\n", 1);  
         
    }
    
}
