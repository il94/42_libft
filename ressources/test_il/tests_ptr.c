/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:03:15 by ilyes             #+#    #+#             */
/*   Updated: 2022/04/23 00:55:58 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	z_printlist(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
}

void	delete_element(void *del)
{
	char	*del_c;
	
	del_c = (char *)del;
	del_c = NULL;
}

void	plus_1_str(void *f)
{
	char	*str;

	str = f;
	str[0] = '9';
}
