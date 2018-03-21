#include "libft.h"

int                 ft_atoi(const char *str)
{
    int             r;
    int             n;
    U_INT			i;
    U_INT			j;

    n = 1;
    r = 0;
    i = 0;
    j = 0;
    if (*str == '\0' || !str)
        return (r);
    while (ft_isspace((int)str[i]))
        i++;
    n = (str[i] == '-') ? -1 : 1;
    i += (str[i] == '+' || str[i] == '-') ? 1 : 0;
    while (ft_isdigit((int)str[i + j]))
        j++;
    while (j)
        r += ((int)str[i++] - 48) * ft_xpowni(10, -1 + j--);
    return (n * r);
}
