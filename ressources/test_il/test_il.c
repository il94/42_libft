/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_il.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:41:52 by ilyes             #+#    #+#             */
/*   Updated: 2022/05/01 22:56:48 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "test_il.h"

int	main(int ac, char **av)
{
	t_func	function;

	if (ac < 2)
		printf("Chelou ton bail\n");
	else
	{
		function = check_arguments(av[1], ac);
		if (function == INVALID)
		{
			printf("Cheloue ta fonction\n");
			return (0);
		}
		else if (function == HELP)
			print_help();
		else if (function == ATOI)
			run_atoi_test(av[2]);
		else if (function == BZERO)
			run_bzero_test(av[2], av[3]);
		else if (function == ITOA)
			run_itoa_test(av[2]);
		else if (function == MEMCHR)
			run_memchr_test(av[2], av[3], av[4]);
		else if (function == MEMCPY)
			run_memcpy_test(av[2], av[3], av[4]);
		else if (function == MEMCMP)
			run_memcmp_test(av[2], av[3], av[4]);
		else if (function == MEMMOVE)
			run_memmove_test(av[2], av[3], av[4]);
		else if (function == MEMSET)
			run_memset_test(av[2], av[3], av[4]);
		else if (function == PUTCHAR_FD)
			run_putchar_fd_test(av[2], av[3]);
		else if (function == PUTENDL_FD)
			run_putendl_fd_test(av[2], av[3]);
		else if (function == PUTNBR_FD)
			run_putnbr_fd_test(av[2], av[3]);
		else if (function == PUTSTR_FD)
			run_putstr_fd_test(av[2], av[3]);
		else if (function == SPLIT)
			run_split_test(av[2], av[3]);
		else if (function == STRCHR)
			run_strchr_test(av[2], av[3]);
		else if (function == STRDUP)
			run_strdup_test(av[2]);
		else if (function == STRITERI)
			run_striteri_test(av[2]);
		else if (function == STRLCAT)
			run_strlcat_test(av[2], av[3], av[4]);
		else if (function == STRLCPY)
			run_strlcpy_test(av[2], av[3], av[4]);
		else if (function == STRMAPI)
			run_strmapi_test(av[2]);
		else if (function == STRNCMP)
			run_strncmp_test(av[2], av[3], av[4]);
		else if (function == STRNSTR)
			run_strnstr_test(av[2], av[3], av[4]);
		else if (function == STRRCHR)
			run_strrchr_test(av[2], av[3]);
		else if (function == SUBSTR)
			run_substr_test(av[2], av[3], av[4]);
		else if (function == STRLEN)
			run_strlen_test(av[2]);
		else if (function == TOLOWER)
			run_tolower_test(av[2]);
		else if (function == TOUPPER)
			run_toupper_test(av[2]);
	}
	return (0);
}
