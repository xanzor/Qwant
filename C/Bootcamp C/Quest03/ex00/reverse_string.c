#include <stdio.h>
#include <string.h>
#include <stdlib.h>



 char* reverse_string(char* param_1)
 {   
     int length = strlen(param_1);
     int i, j, c;

     for (i = 0, j = length-1; i < j; i++, j--) {
         c = param_1[i];
            param_1[i] = param_1[j];
            param_1[j] = c;
     }
     return param_1;
 }



//  int main() {
//     char *my_str = strdup("Hello");
  
//    printf("Before reverse -> %s\n", my_str);
//    printf("Reverse -> %s\n", reverse_string(my_str));
//    return 0;
//  }