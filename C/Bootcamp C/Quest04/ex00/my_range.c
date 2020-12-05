#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 

int* my_range(int param_1, int param_2)
{
    int *a = (int*)malloc(sizeof(a)  * (param_2 - param_1));
    if(param_1 >= param_2){
        return NULL;
    }
    
    for(int i = 0; param_1 < param_2; i++) {
        a[i] = param_1;
        param_1++;
    }
    return a;
}

// int main() {
//     int min[] = {6, 7, 8};
//     int max[] = {9, 10, 11};
//      printf("%d", my_range(*min, *max));
//     return 0;
// }