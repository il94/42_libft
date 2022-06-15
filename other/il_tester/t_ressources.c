/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ressources.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:45:37 by ilyes             #+#    #+#             */
/*   Updated: 2022/05/03 09:24:09 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_il.h"

char	add_i(unsigned int value, char c)
{
	return (c + value);
}

void	deduct_i(unsigned int value, char *c)
{
	*c += value;
}
