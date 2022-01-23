/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:06:38 by wferreir          #+#    #+#             */
/*   Updated: 2022/01/16 09:51:03 by wferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar( char value);

void	rush(int x, int y)
{
	int	collum;
	int	line;

	line = 1;
	while (line <= y && x > 0)
	{
		collum = 1;
		while (collum <= x)
		{
			if ((collum == 1 && line == 1)
				|| (collum == x && line == y && collum != 1 && line != 1))
				ft_putchar('/');
			else if ((collum == x && line == 1) || (collum == 1 && line == y))
				ft_putchar('\\');
			else if ((collum == 1)
				|| (collum == x) || (line == 1) || (line == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			collum++;
		}
		ft_putchar('\n');
		line++;
	}
}
