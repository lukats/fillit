#include "libft.h"

U_LONG		ft_strlen(const char *str)
{
    U_LONG	l;

    l = 0;
    if (!str || *str == '\0')
        return (l);
    while (str[l])
        l++;
    return (l);
}
