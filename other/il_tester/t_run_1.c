/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_run_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 02:14:46 by ilyes             #+#    #+#             */
/*   Updated: 2022/07/04 12:26:48 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	printf("Code à check\n");
	n = atoi(n_c);
	result = ft_itoa(n);
	printf("Ft_itoa = %s && n = %d\n", result, n);
	free(result);
}

void	run_strdup_test(char *s)
{
	char	*dst1;
	char	*dst2;

	printf("Code à check\n");
	dst1 = strdup(s);
	dst2 = ft_strdup(s);
	if (*dst1 == *dst2)
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %s\n", dst1);
	printf("Ft = %s\n", dst2);
	free(dst1);
	free(dst2);
}

void	run_strlen_test(char *s)
{
	if (strlen(s) == ft_strlen(s))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %ld\n", strlen(s));
	printf("Ft = %ld\n", ft_strlen(s));
}

void	run_tolower_test(char *c)
{
	if (tolower(*c) == ft_tolower(*c))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %c\n", tolower(*c));
	printf("Ft = %c\n", ft_tolower(*c));
}

void	run_toupper_test(char *c)
{
	if (toupper(*c) == ft_toupper(*c))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %c\n", toupper(*c));
	printf("Ft = %c\n", ft_toupper(*c));
}
