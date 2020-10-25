#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
int size;
char** array;
} string_array;
#endif

string_array* my_split(char* str, char* delim) {
    
    if (str[0]=='\0') return 0;
    if (delim[0]=='\0') return 0;
    if (strlen(str) < strlen(delim)) return 0;

    int count = 0; 
    for(int i=0; i < strlen(str); i++){
        if(str[i] == delim[0]){
            count++;
        }
    }

    string_array *result = (string_array*)malloc(sizeof(string_array));
    result -> size = count + 1;
    result -> array = malloc((count+1)*sizeof(char*));
    
    for(int i=0; i< count+1; i++){
        result -> array[i] = malloc(strlen(str)*sizeof(char));
    }

    int j=0, k=0;
    for(int i=0; i < strlen(str); i++){
        if(str[i+1] != delim[0]){
            *(*(result->array + k)+j) = str[i];
            j++;
        }
        else{
            *(*(result->array + k)+j) = str[i];
            k++; j=0;
            i++;
        }
    }
    return result;   
}
