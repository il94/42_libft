/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_il.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:09:09 by ilyes             #+#    #+#             */
/*   Updated: 2022/04/20 23:29:14 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_IL_H
# define TEST_IL_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <bsd/string.h>
# include <unistd.h>

typedef enum e_func	t_func;
enum e_func
{
	ATOI,
	BZERO,
	CALLOC,
	ITOA,
	MEMCHR,
	MEMCPY,
	MEMCMP,
	MEMMOVE,
	MEMSET,
	PUTCHAR_FD,
	PUTENDL_FD,
	PUTNBR_FD,
	PUTSTR_FD,
	SPLIT,
	STRCHR,
	STRDUP,
	STRITERI,
	STRJOIN,
	STRLCAT,
	STRLCPY,
	STRLEN,
	STRMAPI,
	STRNCMP,
	STRNSTR,
	STRRCHR,
	STRTRIM,
	SUBSTR,
	TOLOWER,
	TOUPPER,
	HELP,
	INVALID
};

void	search_whitespaces(char *str);
void	print_help(void);
char	add_i(unsigned int value, char c);
void	deduct_i(unsigned int value, char *c);
t_func	one_param(char *function);
t_func	two_params(char *function);
t_func	three_params(char *function);
t_func	check_arguments(char *function, int parameters);
t_func	param_tester(char *function);
void	run_atoi_test(char *nptr_c);
void	run_bzero_test(char *s, char *n_c);
//void	run_calloc_test(char *nmemb_c, char *size_c);
void	run_itoa_test(char *n_c);
void	run_memchr_test(char *s, char *c_c, char *n_c);
void	run_memcpy_test(char *dest, char *src, char *n_c);
void	run_memcmp_test(char *s1, char *s2, char *n_c);

void	run_memset_test(char *s, char *c, char *n_c);
void	run_putchar_fd_test(char *c_c, char *fd_c);
void	run_putendl_fd_test(char *s, char *fd_c);
void	run_putnbr_fd_test(char *n_c, char *fd_c);
void	run_putstr_fd_test(char *s, char *fd_c);
void	run_split_test(char *s, char *c);
void	run_strchr_test(char *s, char *c_c);

void	run_striteri_test(char *s);

void	run_strlcat_test(char *dst_c, char *src, char *size_c);
void	run_strlcpy_test(char *dst_c, char *src, char *n_c);

void	run_strmapi_test(char *s);

void	run_strnstr_test(char *big, char *little, char *len_c);
void	run_strrchr_test(char *s, char *c_c);

void	run_substr_test(char *s, char *start, char *len_c);


#endif
