/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:13:16 by femonner          #+#    #+#             */
/*   Updated: 2022/01/29 17:08:14 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*string;
	char	*find;
	int		x;

	if (*to_find == '\0')
		return (str);
	x = 0;
	string = str;
	find = to_find;
	while (x == 0)
	{
		if (*find == '\0')
			return ((char *)(string - (find - to_find)));
		if (*string == *find)
			find++;
		else
			find = to_find;
		if (*string == '\0')
			break ;
		string++;
	}
	return (0);
}
