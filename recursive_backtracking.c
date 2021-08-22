
#include "recursive_backtracking.h"

int recursive_backtracking(int x, int y, char **grid, char *input)
{
    char i;
    int temp_x;
    int temp_y;

    i = '0';
    while(i < 4)
    {
        grid[y][x] = i + 1;
        i++;
        if (CheckConstraint(x, y, grid, input))
        {
            if (x == 3 && y == 3)
                return (1);
            else
            {
                temp_x = (1 + x) % 4;
                temp_y = y + x / 3;
                if (recursive_backtracking(temp_x, temp_y, grid, input))
                    return (1);
            }
        }
    }
  return (0);
}