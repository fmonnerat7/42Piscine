/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:25:14 by femonner          #+#    #+#             */
/*   Updated: 2022/01/23 11:54:54 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	inicio;
	int	fim;

	inicio = 0;
	fim = size - 1;
	while (inicio < fim)
	{
		aux = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = aux;
		inicio++;
		fim--;
	}
}
