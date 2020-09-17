#include <stdlib.h>
#include <string.h>

int* my_range(int min, int max)
{  
    int   *integer; 
        if (min >= max) 
        return    NULL;
       integer = (int*)malloc(sizeof(integer)  * (max - min));

       for (int i = 0; min < max; i++) {
           integer[i] = min;
           min++;
          }  
   return integer;
}

// int main() {
//     int min1 = 6;
// 	int max1 = 11;
// 	 my_range(min1, max1);
//     return 0;
// }