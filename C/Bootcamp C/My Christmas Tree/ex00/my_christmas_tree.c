#include <string.h>
#include <stdlib.h>


void tree(int height)
{
        int layer_height = 4;
        int layer_width[height];
        int stars = 0;
        int substract = 1;
        for (int i = 0; i < height; i++)
        {
                if (i == 0)
                {
                        stars += 1;
                        layer_width[i] = stars;
                        stars += 2 * (layer_height - 1);
                }
                else
                {
                        stars -= 2 * substract;
                        if (layer_height % 2 == 0 && layer_height != 4)
                        {
                                substract += 1;
                        }
                        layer_width[i] = stars;
                        stars += 2 * (layer_height - 1);
                }
                
                layer_height += 1;
        }
        layer_height = 4;
        const int constant_spaces = stars / 2;
        int spaces;
        for (int i = 0; i < height; i++)
        {
                spaces = constant_spaces - layer_width[i] / 2; // 5 / 2 = 2
                int side_width = 0;
                for (int j = spaces; j > spaces - layer_height; j -= 1)
                {
                        for (int z = 0; z < j; z += 1)
                        {
                                printf(" ");
                        }
                        for (int z = 0; z < layer_width[i] + side_width; z += 1)
                        {
                                printf("*");
                        }
                        printf("\n");
                        side_width += 2;
                }
                layer_height += 1;
        }
        for (int i = 0; i < height; i++)
        {
                if (height % 2 == 0)
                {
                        spaces = constant_spaces - height / 2 + 1;
                }
                else spaces = constant_spaces - height / 2;
                for (int j = 0; j < spaces; j++)
                {
                        printf(" ");
                }
                for (int j = 0; j < height; j++)
                {
                        printf("|");
                }
                printf("\n");
        }
}


int main(int ac, char **av)
{
        if (ac != 2)
        {
                printf("Error with parsing\n");
                return 1;
        }
        int height = atoi(av[1]);
        tree(height);
        return 0;
}