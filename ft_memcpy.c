/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:40:34 by ilandols          #+#    #+#             */
/*   Updated: 2022/04/23 00:56:57 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p;
	const char	*q;

	p = dest;
	q = src;
	i = 0;
	while (i < n)
	{
		*p = *q;
		p++;
		q++;
		i++;
	}
	return (dest);
}
