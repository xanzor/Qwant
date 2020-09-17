#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_robot_simulator(char *a)
{
  int x = 0;
  int y = 0;
  char *dir[4];
  dir[0] = "north";
  dir[1] = "east";
  dir[2] = "south";
  dir[3] = "west";
  int orient = 0; // 0-N, 1-E, 2-S, 3-W
  for (int i = 0; i < strlen(a); i++)
  {
    if (a[i] == 'A')
    {
      if (orient == 0)
        y--;
      if (orient == 1)
        x++;
      if (orient == 2)
        y++;
      if (orient == 3)
        x--;
    }
    if (a[i] == 'R')
    {
      if (orient == 3)
        orient = 0;
      else
        orient++;
    }
    if (a[i] == 'L')
    {
      if (orient == 0)
        orient = 3;
      else
        orient--;
    }
  }
  char *buffer = (char *)malloc(100 * sizeof(char));
  sprintf(buffer, "{x: %d, y: %d, bearing: '%s'}", x, y, dir[orient]);
  return buffer;
}