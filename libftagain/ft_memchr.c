

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*cur;
	size_t		i;

	cur = (const char *)s;
	i = -1;
	while (++i < n)
	{
		if (*(cur + i) == (char)c)
			return ((void *)cur + i);
	}
	return (NULL);
}
