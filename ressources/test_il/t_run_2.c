/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_run_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:16:26 by ilyes             #+#    #+#             */
/*   Updated: 2022/04/20 23:31:39 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_il.h"

void	run_strchr_test(char *s, char *c_c)
{
	int	c;

	c = c_c[0];
	if (strchr(s, c) == ft_strchr(s, c))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %p\nFt = %p\n", strchr(s, c), ft_strchr(s, c));
}

void	run_strrchr_test(char *s, char *c_c)
{
	int	c;

	c = c_c[0];
	if (strrchr(s, c) == ft_strrchr(s, c))
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %p\nFt = %p\n", strrchr(s, c), ft_strrchr(s, c));
}

void	run_split_test(char *s, char *c)
{
	int		i;
	char	**result;

	result = ft_split(s, c[0]);
	i = -1;
	while (result[++i])
		printf("Ft_split = %s && s = %s && c = %s\n", result[i], s, c);
	i = -1;
	while (result[++i])
		free(result[i]);
	free(result);
}

void	run_strmapi_test(char *s)
{
	char	(*f)(unsigned int, char);
	char	*result;

	f = &add_i;
	result = ft_strmapi(s, f);
	printf("Ft_strmapi = %s && s = %s\n", result, s);
	free(result);
}

void	run_striteri_test(char *s)
{
	void	(*f)(unsigned int, char *);
	char	*result;

	f = &deduct_i;
	result = malloc((strlen(s) + 1) * sizeof(char));
	result = strcpy(result, s);
	ft_striteri(s, f);
	printf("Ft_striteri = %s && s = %s\n", s, result);
	free(result);
}

void	run_bzero_test(char *s, char *n_c)
{
	size_t	c;
	char	*s1;
	char	*s2;

	s1 = ft_strdup(s);
	s2 = ft_strdup(s);
	c = (size_t)atoi(n_c);
	bzero(s1, c);
	ft_bzero(s2, c);
	if (*s1 == *s2)
		printf("Gg wp\n");
	else
		printf("Fail\n");
	printf("Base = %s\nFt = %s\n", s1, s2);
	free(s1);
	free(s2);
}

void	run_putnbr_fd_test(char *n_c, char *fd_c)
{
	int	n;
	int	fd;

	n = atoi(n_c);
	if (fd_c[0] == '1' && fd_c[1] == '\0')
		fd = 1;
	else
		fd = open("./test_putnbr_fd", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd(n, fd);
	if (fd != 1)
		close(fd);
}

void	run_putendl_fd_test(char *s, char *fd_c)
{
	int	fd;

	if (fd_c[0] == '1' && fd_c[1] == '\0')
		fd = 1;
	else
		fd = open("./test_putendl_fd", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd(s, fd);
	if (fd != 1)
		close(fd);
}

void	run_putchar_fd_test(char *c_c, char *fd_c)
{
	char	c;
	int		fd;

	c = c_c[0];
	if (fd_c[0] == '1' && fd_c[1] == '\0')
		fd = 1;
	else
		fd = open("./test_putchar_fd", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd(c, fd);
	if (fd != 1)
		close(fd);
}

void	run_putstr_fd_test(char *s, char *fd_c)
{
	int	fd;

	if (fd_c[0] == '1' && fd_c[1] == '\0')
		fd = 1;
	else
		fd = open("./test_putstr_fd", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd(s, fd);
	if (fd != 1)
		close(fd);
}
