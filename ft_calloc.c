/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilandols@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:44:23 by ilandols          #+#    #+#             */
/*   Updated: 2024/02/17 18:08:47 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	i;

	i = nmemb * size;
	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	if (size == 0 || i == 0)
		s = malloc(1);
	else
		s = malloc(i);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, i);
	return (s);
}
