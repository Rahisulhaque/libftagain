 

#include "libft.h"

int		ft_wstrlen(const wchar_t *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
