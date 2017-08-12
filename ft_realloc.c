

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (!ptr || !size)
		return (NULL);
	if (!(new_ptr = ft_strnew(size)))
		return (NULL);
	ft_strcpy(new_ptr, ptr);
	return (new_ptr);
}
