#include <unistd.h>

char *init_input(*arg, *dest)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(arg[i] && i < 32)
    {
        if(arg[i + 1] && arg[i] >= 1 && arg[i] <= 4 && arg[i+1] == ' ')
            dest[j] = arg[i];
            j++;
        }
        i++;
    }
    if(i == 16)
        return *dest;
    else
        return NULL;

}