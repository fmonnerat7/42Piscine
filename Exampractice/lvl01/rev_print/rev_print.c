/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:19:58 by femonner          #+#    #+#             */
/*   Updated: 2022/01/28 10:40:40 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	sz;

	sz = 0;
	while (str[sz])
	{
		sz++;
	}
	while (sz > 0)
	{
		sz--;
		write(1, &str[sz], 1);
	}
	return (str);
}

int	main(void)
{
	char	res;

	res = rev_print("duarte");
	rev_print("felipe monnerat");
	write(1, "\n", 1);
	rev_print("42 lisboa");
	write(1, "\n", 1);
	return (0);
}
