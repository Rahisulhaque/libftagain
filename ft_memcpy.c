/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 05:28:33 by rhaque            #+#    #+#             */
/*   Updated: 2017/08/12 05:28:41 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *c1;
	char *c2;

	c1 = (char *)dst;
	c2 = (char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (--n)
		*c1++ = *c2++;
	*c1 = *c2;
	return (dst);
}
