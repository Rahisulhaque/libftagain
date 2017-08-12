
#include "libft.h"

char	*ft_strrev(char *str)
{
	int		index;
	int		len;
	char	tmp;

	index = 0;
	len = ft_strlen(str) - 1;
	while (index <= len)
	{
		tmp = str[index];
		str[index] = str[len];
		str[len] = tmp;
		index++;
		len--;
	}
	return (str);
}
