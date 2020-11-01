#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inter(char* param_1, char* param_2)
{
    char* res_string = (char*)malloc(sizeof(char));
    char* inter_string = (char*)malloc(sizeof(char));

    int i = 0,j;
    int index;
    int k = 0; 
    
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

    for(i = 0; i < strlen(res_string); i++){
        for(j = 0; j < strlen(param_2); j++){
            if(res_string[i] == param_2[j]){
                inter_string[k] = res_string[i];
                k++;
                break;
            }
        }
    }

    return inter_string;    
}

