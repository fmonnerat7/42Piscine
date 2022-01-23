/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:26:32 by femonner          #+#    #+#             */
/*   Updated: 2022/01/23 11:54:58 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	prm;
	int	ult;

	prm = 0;
	while (prm < size)
	{
		ult = prm + 1;
		while (ult < size)
		{
			if (tab[prm] > tab[ult])
			{
				temp = tab[prm];
				tab [prm] = tab [ult];
				tab [ult] = temp;
			}
			ult++;
		}
		prm++;
	}
}
