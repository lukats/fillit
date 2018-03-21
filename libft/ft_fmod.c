#include "libft.h"

float			ft_fmod(float value, float modulo)
{
	float		resul;
	float		arrondi;
	float		diff;

	resul = value / modulo;
	arrondi = 0.0;
	while (resul >= 1.0 || resul <= -1.0)
	{
		resul += (resul < 0.0) ? 1.0 : -1.0;
		arrondi += (resul < 0.0) ? -1.0 : 1.0;
	}
	diff = value / modulo - arrondi;
	return (diff * modulo);
}
