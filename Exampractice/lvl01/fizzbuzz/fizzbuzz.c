/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:52:05 by femonner          #+#    #+#             */
/*   Updated: 2022/01/29 15:11:35 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_num(int num)
{
	if (num > 9)
	{
		ft_write_num(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else if (n % 3 == 0)
		{
			write(1, "fizz\n", 5);
		}
		else if (n % 5 == 0)
		{
			write(1, "buzz\n", 5);
		}
		else
		{
			
			ft_write_num(n);
			write(1, "\n", 1);
		}
		n++;
	}
}
