#include <stdlib.h>

#include "main_function.h"

int main(int argc, char *argv[])
{
    char **grid;
    char *input;
    int   res;

    if(argc == 2)
        input = init_input(argc, argv[1]);  
    if(!input || argc != 2)
    {
        error();
        return;
    }
    grid = grid_init();
    if(!grid)
    {
        error();
        return;
    }
    res = recursive_backtracking(0, 0, grid, input);
    if(res == 1)
        write_grid();
    else
        error();
    return;
}