
#include "libft.h"

char	**ft_stradd(char **s, char *add)
{
	char	**rt;
	int		i;

	i = 0;
	rt = ft_sstrnew(ft_sstrlen(s) + 1);
	while (s[i])
	{
		rt[i] = ft_strdup(s[i]);
		i++;
	}
	rt[i] = ft_strdup(add);
	ft_sstrdel(s);
	s = rt;
	return (rt);
}
