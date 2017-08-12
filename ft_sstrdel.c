
#include "libft.h"

/*
** The ft_sstrdel() will free the char **s and set every pointer to NULL
*/

void	ft_sstrdel(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_memdel((void *)&s[i++]);
	}
	ft_memdel((void *)&s);
}
