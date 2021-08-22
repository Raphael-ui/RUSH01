int sudokuVerif(char x, char y, char **grid)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (i < x || j < y)
    {
        if (grid[y][i] == grid[y][x] || grid[i][x] == grid[y][x])
            return (0);
        i++;
        j++;
    }
	return (1);
}
