/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:26:14 by femonner          #+#    #+#             */
/*   Updated: 2022/02/01 16:45:24 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((*s1) - (*s2));
}

void	ft_sort(char **tab, int size)
{
	char	*swap;
	int		posi;
	int		posf;

	posi = 1;
	while (posi < size)
	{
		posf = posi + 1;
		while (posf < size)
		{
			if (ft_strcmp(tab[posi], tab[posf]) > 0)
			{
				swap = tab[posi];
				tab [posi] = tab [posf];
				tab [posf] = swap;
			}
			posf++;
		}
		posi++;
	}
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	ft_sort(argv, argc);
	while (index < argc)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
		index++;
	}
}
