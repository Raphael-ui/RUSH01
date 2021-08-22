#include <unistd.h>

void write_grid(char **grid)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(grid[i])
    {
        while(grid[i][j])
        {
            write(1, &grid[i][j], 1);
            j++;
        }
        i++;
    }
}