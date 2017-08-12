
#include "libft.h"

int	ft_strlnstr(char *big, char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || !big)
		return (0);
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j])
		{
			++i;
			++j;
			if (little[j] == '\0')
				return (i);
		}
		i++;
	}
	if (*little == '\0')
		return (ft_strlen(big));
	return (-1);
}

