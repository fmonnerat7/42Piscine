/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:07:21 by femonner          #+#    #+#             */
/*   Updated: 2022/02/03 12:08:08 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	c;

	if (min >= max)
	{
		res = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * (max - min));
	c = 0;
	while (min < max)
	{
		res[c++] = min++;
	}
	return (res);
}

/*void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d", test[size - 1]);
}

int	main(void)
{
	int *test0;
	int *test1;
	int *test2;
	int *test3;
	int *test4;

	test0 = ft_range(1, 11);
	printf("\n* test0 (1, 11): ");
	print_test(test0, 10);

	test1 = ft_range(2, 1);
	printf("\n* test1 (2, 1): ");
	print_test(test1, 0);

	test2 = ft_range(3, 3);
	printf("\n* test2 (3, 3): ");
	print_test(test2, 0);

	test3 = ft_range(4, 41);
	printf("\n* test3 (4, 41): ");
	print_test(test3, 37);
}*/
