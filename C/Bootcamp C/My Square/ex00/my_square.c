#include <stdlib.h>
#include <string.h>
#include <stdio.h>


 
void my_square(int param_1, int param_2) {
    
    int x = param_2;
    int y = param_1;
 
    int i, j;
    
 
    for(i=1; i <= x; i++) { 
        for(j=1; j <= y; j++) { 
            if(i == 1 || i == x) { 
                if(j == 1 || j == y) {
                   printf("o");
                }
                else
                {
                    printf("-");
                }
            }
            else if(j == 1 || j == y) {
                printf("|");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
 
int main(int ac, char **av) { 
    if (av[1] == NULL || av[2] == NULL) {
        return 0;
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    my_square(x, y);
    return 0;
}