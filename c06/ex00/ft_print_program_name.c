/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:31:21 by femonner          #+#    #+#             */
/*   Updated: 2022/02/01 12:38:53 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **str)
{
	int	i;

	i = 0;
	argc = 0;
	while (str[0][i] != '\0')
	{
		write(1, &str[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
