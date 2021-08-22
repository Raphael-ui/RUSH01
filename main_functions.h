#ifdef MAIN_FUNCTION_H
#define MAIN_FUNCTION_H

int     **grid_init(void);

char    *init_input(*arg, *dest);

void    error(void);

void    write_grid(char **grid);

int     recursive_backtracking(int x, int y, char **grid, char *input);

#endif