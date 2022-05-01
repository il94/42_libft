/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tools.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyes <ilyes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:09:28 by ilyes             #+#    #+#             */
/*   Updated: 2022/05/01 21:08:38 by ilyes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "test_il.h"

int	char_to_whitespace(char c)
{
	if (c == 't')
		return (9);
	else if (c == 'n')
		return (10);
	else if (c == 'v')
		return (11);
	else if (c == 'f')
		return (12);
	else if (c == 'r')
		return (13);
	else
		return (0);
}

void	search_whitespaces(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\\')
		{
			c = char_to_whitespace(str[i + 1]);
			if (c)
			{
				str[i] = c;
				str[i + 1] = ' ';
			}
		}
		i++;
	}
}

void	print_help(void)
{
	printf("Pour utiliser le testeur :\n");
	printf("\"./a.out <nom_de_la_fonction> <arguments>\"\n");
	printf("Si l'argument est un pointeur sur fonction, ne rien mettre\n");
	printf("Si l'argument est un descripteur de fichier, entrer un input random. ");
	printf("Un fichier \"file_test\" sera généré.\n");
	printf("Si l'argument est une zone mémoire, le testeur se chargera d'allouer la taille nécessaire\n");
}
