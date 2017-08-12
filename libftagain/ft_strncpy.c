

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = ft_strlen((char*)src);
	while (i < len)
	{
		if (i > strlen)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
