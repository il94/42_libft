/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_run_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:09:25 by ilyes             #+#    #+#             */
/*   Updated: 2022/05/03 09:24:17 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_il.h"

void	run_memchr_test(char *s, char *c_c, char *n_c)
{
	int		c;
	size_t	n;

	printf("Code à check\n");
	c = c_c[0];
	n = (size_t)atoi(n_c);
	if (memchr(s, c, n) == ft_memchr(s, c, n))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %p\nFt = %p\n", memchr(s, c, n), ft_memchr(s, c, n));
}

void	run_memcmp_test(char *s1, char *s2, char *n_c)
{
	size_t	n;

	n = (size_t)atoi(n_c);
	if (memcmp(s1, s2, n) == ft_memcmp(s1, s2, n))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %d\nFt = %d\n", memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
}

void	run_strlcpy_test(char *dst, char *src, char *n_c)
{
	size_t	n;
	char	*dst1;
	char	*dst2;

	dst1 = malloc((strlen(dst) + strlen(src) + 1) * sizeof(char));
	dst2 = malloc((strlen(dst) + strlen(src) + 1) * sizeof(char));
	dst1 = strcpy(dst1, dst);
	dst2 = strcpy(dst2, dst);
	n = (size_t)atoi(n_c);
	if (strlcpy(dst1, src, n) == ft_strlcpy(dst2, src, n) && *dst1 == *dst2)
		printf("Gg wp\n");
	else
		printf("Fail\n");
	dst1 = strcpy(dst1, dst);
	dst2 = strcpy(dst2, dst);
	printf("Base = %zu && dst = %s\n", strlcpy(dst1, src, n), dst1);
	printf("Ft = %zu && dst = %s\n", ft_strlcpy(dst2, src, n), dst2);
	free(dst1);
	free(dst2);
}

void	run_strlcat_test(char *dst, char *src, char *size_c)
{
	size_t	size;
	char	*dst1;
	char	*dst2;

	dst1 = malloc((strlen(dst) + strlen(src) + 1) * sizeof(char));
	dst2 = malloc((strlen(dst) + strlen(src) + 1) * sizeof(char));
	dst1 = strcpy(dst1, dst);
	dst2 = strcpy(dst2, dst);
	size = (size_t)atoi(size_c);
	if (strlcat(dst1, src, size) == ft_strlcat(dst2, src, size)
		&& *dst1 == *dst2)
		printf("Gg wp\n");
	else
		printf("Fail\n");
	dst1 = strcpy(dst1, dst);
	dst2 = strcpy(dst2, dst);
	printf("Base = %zu && dst = %s\n", strlcat(dst1, src, size), dst1);
	printf("Ft = %zu && dst = %s\n", ft_strlcat(dst2, src, size), dst2);
	free(dst1);
	free(dst2);
}

void	run_strnstr_test(char *big, char *little, char *len_c)
{
	size_t	len;

	len = (size_t)atoi(len_c);
	if (strnstr(big, little, len) == ft_strnstr(big, little, len))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %p\n", strnstr(big, little, len));
	printf("Ft = %p\n", ft_strnstr(big, little, len));
}

void	run_substr_test(char *s, char *start_c, char *len_c)
{
	unsigned int	start;
	size_t			len;
	char			*result;

	printf("Code à check\n");
	start = atoi(start_c);
	len = (size_t)atoi(len_c);
	result = ft_substr(s, start, len);
	printf("Ft_substr = %s && s = %s\n", result, s);
	free(result);
}

void	run_memcpy_test(char *dest, char *src, char *n_c)
{
	size_t	n;
	char	*dest1;
	char	*dest2;

	printf("Code à check\n");
	dest1 = malloc((strlen(dest) + 1) * sizeof(char));
	dest2 = malloc((strlen(dest) + 1) * sizeof(char));
	dest1 = strcpy(dest1, dest);
	dest2 = strcpy(dest2, dest);
	n = (size_t)atoi(n_c);
	memcpy(dest1, src, n);
	ft_memcpy(dest2, src, n);
	if (*dest1 == *dest2)
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %s\nFt = %s\n", dest1, dest2);
	free(dest1);
	free(dest2);
}

void	run_memmove_test(char *dest, char *src, char *n_c)
{
	size_t	n;
	char	*dest1;
	char	*dest2;

	printf("Code à check\n");
	dest1 = malloc((strlen(dest) + 1) * sizeof(char));
	dest2 = malloc((strlen(dest) + 1) * sizeof(char));
	dest1 = strcpy(dest1, dest);
	dest2 = strcpy(dest2, dest);
	n = (size_t)atoi(n_c);
	memmove(dest1, src, n);
	ft_memmove(dest2, src, n);
	if (*dest1 == *dest2)
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %s\nFt = %s\n", dest1, dest2);
	free(dest1);
	free(dest2);
}

void	run_memset_test(char *s, char *c_c, char *n_c)
{
	size_t	n;
	char	*s1;
	char	*s2;
	char	c;

	printf("Code à check\n");
	c = c_c[0];
	s1 = ft_strdup(s);
	s2 = ft_strdup(s);
	n = (size_t)atoi(n_c);
	memset(s1, c, n);
	ft_memset(s2, c, n);
	if (*s1 == *s2)
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %s\nFt = %s\n", s1, s2);
	free(s1);
	free(s2);
}

void	run_strncmp_test(char *s1, char *s2, char *n_c)
{
	size_t	n;

	n = (size_t)atoi(n_c);
	if (strncmp(s1, s2, n) == ft_strncmp(s1, s2, n))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %d\n", strncmp(s1, s2, n));
	printf("Ft = %d\n", ft_strncmp(s1, s2, n));
}
