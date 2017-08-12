/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 05:26:19 by rhaque            #+#    #+#             */
/*   Updated: 2017/08/12 05:26:36 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		*(unsigned char*)(dest + i) = (unsigned char)c;
		i++;
	}
	return (dest);
}
