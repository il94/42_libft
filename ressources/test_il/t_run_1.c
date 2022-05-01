/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_run_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 02:14:46 by ilyes             #+#    #+#             */
/*   Updated: 2022/04/20 18:43:44 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_il.h"

void	run_atoi_test(char *nptr_c)
{
	char	*nptr;

	nptr = ft_strdup(nptr_c);
	search_whitespaces(nptr);
	if (atoi(nptr) == ft_atoi(nptr))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %d\nFt = %d\n", atoi(nptr), ft_atoi(nptr));
	free(nptr);
}

void	run_itoa_test(char *n_c)
{
	int		n;
	char	*result;

	n = atoi(n_c);
	result = ft_itoa(n);
	printf("Ft_itoa = %s && n = %d\n", result, n);
	free(result);
}
