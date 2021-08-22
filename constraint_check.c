int	constraintRight(int x, int y, char **grid, char *input)
{
	char max = '0';
	char count = '0';
    int i;

    i = 0;
	if (x != 3) return (1);
	while(i >= 0)
	{
		if (grid[y][i] > max)
		{
			max = grid[y][i];
			count++;
		}
        i--;
	}
	if (count != input[12 + y]) return (0);
	return (1);
}

int	constraintLeft(int x, int y, char **grid, char *input)
{
	char max;
	char count;
    int i;

	max = '0';
	count = '0';
    i = 0;
	while (i <= x)
	{
		if (grid[y][i] > max)
		{
			max = grid[y][i];
			count++;
		}
        if (count > input[8 + y])
            return (0);
        i++;
	}
	if (count != input[8 + y] && x == 3)
        return (0);
	return (1);
}

int	constraintUp(int x, int y, char **grid, char *input)
{
	char max;
	char count;
    int i;

	max = '0';
	count = '0';
    i = 0;
	while(i <= y)
	{
		if (grid[i][x] > max)
		{
			max = grid[i][x];
			count++;
		}
		if (count > input[x]) return (0);
        i++;
	}
	if (count != input[x] && y == 3) return (0);
	return (1);
}

int constraintDown(int x, int y, char **grid, char *input)
{
	char max;
	char count;
    int i;

    i = 0;
    max = '0';
    count = '0';
	if (y != 3)
        return (1);
	while(i >= 0)
	{
		if (grid[i][x] > max)
		{
			max = grid[i][x];
			count++;
		}
        i--;
	}
	if (count != input[4 + x])
        return (0);
	return (1);
}


int checkConstraint(int x, int y, char **grid, char *input)
{
	if (constraintSudok(x, y, grid) && constraintRight(x, y, grid, input)
        && constraintLeft(x, y, grid, input) && constraintUp(x, y, grid, input) 
        && constraintDown(x, y, grid, input))
	    return (1);
    return(0);
}