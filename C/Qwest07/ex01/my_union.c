#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_union(char* param_1, char* param_2)
{
    char* res_string = (char*)malloc(sizeof(char));

    int i,j;
    int index;
    
        res_string[0] = param_1[0];
        i = 1;
        //j = 1;
        while(param_1[i] != '\0'){
            for(j = 0; j < strlen(res_string); j++){
                if(param_1[i] == res_string[j]){
                    break;
                }
            }

            if(j == strlen(res_string)){
                res_string[j] = param_1[i];
                i++;
            }else{
                i++;
            }       
    }

    int k = strlen(res_string);
    int m = 0;
    int n;
    while(param_2[m] != '\0'){
        for(n = 0; n < strlen(res_string); n++){
            if(param_2[m] == res_string[n]){
                break;
            }
        }

        if(n == strlen(res_string)){
            res_string[k] = param_2[m];
            k++;
            m++;
        }else{
            m++;
        }
    }
  
    return res_string;    
}