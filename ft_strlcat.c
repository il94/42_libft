/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:41:54 by ilandols          #+#    #+#             */
/*   Updated: 2022/10/29 14:49:49 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size < i)
		return (size + j);
	else
	{
		count = i + j;
		j = 0;
		while (src[j] && i < size - 1 && size != 0)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (count);
	}
}
