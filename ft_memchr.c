/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 05:30:52 by rhaque            #+#    #+#             */
/*   Updated: 2017/08/12 05:30:58 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
