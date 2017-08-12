

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *t;

	t = s;
	while (n != 0)
	{
		*t++ = 0;
		n--;
	}
}
