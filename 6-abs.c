#include <unistd.h>

int _abs(int r)
{
    if (r < 0)
        return (-r);
    else
        return (r);
}