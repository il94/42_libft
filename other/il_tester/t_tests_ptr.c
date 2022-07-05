/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tests_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:03:15 by ilyes             #+#    #+#             */
/*   Updated: 2022/07/04 12:21:48 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_il.h"

void	z_printlist(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
}

void	plus_1_str(void *f)
{
	char	*str;

	str = f;
	str[0] = '9';
}
