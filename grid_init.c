#include <stdlib.h>

char **grid_init(void)
{
    int i;
    char **grid;

    i = 0;
    grid = malloc(sizeof(char*) * 4);
    if(!grid)
        return NULL;

    while (i < 4)
    {
        grid[i] = malloc(sizeof(char) * 4);
        if(!grid[i])
            return NULL;
        i++;
    }
    return (grid);
}