

#include "libft.h"

wchar_t	*ft_wstrdup(const wchar_t *s1)
{
	int			i;
	wchar_t		*s2;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
		i++;
	s2 = (wchar_t*)malloc(sizeof(*s2) * (i + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
