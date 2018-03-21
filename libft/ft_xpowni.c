#include "libft.h"

int     ft_xpowni(int x, U_INT n)
{
    if (x == 0)
        return (0);
    else if (n == 0)
        return (1);
    return (x * ft_xpowni(x, --n));
}
