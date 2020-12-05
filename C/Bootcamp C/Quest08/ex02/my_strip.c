#include <string.h>
#include <stdlib.h>
#include <stdio.h>



char* my_strip(char* str)
{   
    int a = 0;
    int j = strlen(str);
  for (int i = 1; i <= j; i++) {
     //if(str[0] == ' ') str[i] = 1;
     if((str[i] == ' ') && (str[i-1]==' ')) continue;
     str[j++] = str[i];
} 
    if (str[j]==' ') j--;
        str[j] = 0;
        
    return str;
}

                // int main(){
                //      char a[] = " Anzor   a    tip          anz        bora";

                //    printf("%s\n", my_strip(a));
                // }