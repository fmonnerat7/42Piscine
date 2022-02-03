/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:06:09 by femonner          #+#    #+#             */
/*   Updated: 2022/01/28 09:46:17 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **str)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (str[1][i] != '\0')
	{
		if (str[1][i] == 'a')
		{
			write(1, "a\n", 2);
			break ;
		}
		i++;
	}
	if (str[1][i] == '\0')
	{
		write(1, "\n", 1);
	}
	return (0);
}
