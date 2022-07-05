/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_params.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:09:13 by ilyes             #+#    #+#             */
/*   Updated: 2022/07/04 12:21:17 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_il.h"

t_func	param_tester(char *function)
{
	if (strcmp(function, "help") == 0)
		return (HELP);
	else
		return (INVALID);
}

t_func	one_param(char *function)
{
	if (strcmp(function, "atoi") == 0)
		return (ATOI);
	else if (strcmp(function, "itoa") == 0)
		return (ITOA);
	else if (strcmp(function, "strdup") == 0)
		return (STRDUP);
	else if (strcmp(function, "strmapi") == 0)
		return (STRMAPI);
	else if (strcmp(function, "striteri") == 0)
		return (STRITERI);
	else if (strcmp(function, "strlen") == 0)
		return (STRLEN);
	else if (strcmp(function, "tolower") == 0)
		return (TOLOWER);
	else if (strcmp(function, "toupper") == 0)
		return (TOUPPER);
	else
		return (INVALID);
}

t_func	two_params(char *function)
{
	if (strcmp(function, "strchr") == 0)
		return (STRCHR);
	else if (strcmp(function, "strrchr") == 0)
		return (STRRCHR);
	else if (strcmp(function, "calloc") == 0)
		return (CALLOC);
	else if (strcmp(function, "split") == 0)
		return (SPLIT);
	else if (strcmp(function, "putendl_fd") == 0)
		return (PUTENDL_FD);
	else if (strcmp(function, "putnbr_fd") == 0)
		return (PUTNBR_FD);
	else if (strcmp(function, "putstr_fd") == 0)
		return (PUTSTR_FD);
	else if (strcmp(function, "putchar_fd") == 0)
		return (PUTCHAR_FD);
	else if (strcmp(function, "bzero") == 0)
		return (BZERO);
	else
		return (INVALID);
}

t_func	three_params(char *function)
{
	if (strcmp(function, "memchr") == 0)
		return (MEMCHR);
	else if (strcmp(function, "memcmp") == 0)
		return (MEMCMP);
	else if (strcmp(function, "memmove") == 0)
		return (MEMMOVE);
	else if (strcmp(function, "strncmp") == 0)
		return (STRNCMP);
	else if (strcmp(function, "strlcpy") == 0)
		return (STRLCPY);
	else if (strcmp(function, "strlcat") == 0)
		return (STRLCAT);
	else if (strcmp(function, "strnstr") == 0)
		return (STRNSTR);
	else if (strcmp(function, "substr") == 0)
		return (SUBSTR);
	else if (strcmp(function, "memcpy") == 0)
		return (MEMCPY);
	else if (strcmp(function, "memset") == 0)
		return (MEMSET);
	else
		return (INVALID);
}

t_func	check_arguments(char *function, int parameters)
{
	if (parameters == 2)
		return (param_tester(function));
	if (parameters == 3)
		return (one_param(function));
	if (parameters == 4)
		return (two_params(function));
	else if (parameters == 5)
		return (three_params(function));
	else
		return (INVALID);
}
