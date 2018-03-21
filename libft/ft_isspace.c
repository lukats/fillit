#include "libft.h"

int         ft_isspace(int c)
{
    return ((c <= 13 && c >= 9) || c == 32);
}
