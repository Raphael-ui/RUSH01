#include <unistd.h>

void    error(void)
{
    write(1, "ERROR", 5);
}