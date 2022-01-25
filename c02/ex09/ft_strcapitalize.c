/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:56:39 by femonner          #+#    #+#             */
/*   Updated: 2022/01/25 11:37:32 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	not_letter_or_number(char a)
{
	if (a < '0' || a > 'z')
	{
		return (1);
	}
	if (a > '9' && a < 'A')
	{
		return (1);
	}
	if (a > 'Z' && a < 'a')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (not_letter_or_number(str[i - 1]) == 1
			&& str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		if (not_letter_or_number(str[i - 1]) == 0
			&& str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
