/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoromen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:06:50 by dsoromen          #+#    #+#             */
/*   Updated: 2022/01/31 14:03:58 by dsoromen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		c;
	int		len;

	len = ft_strlen(src);
	dup = malloc(sizeof(char) * len);
	c = 0;
	while (src[c])
	{
		dup[c] = src[c];
		c++;
	}
	dup[c] = '\0';
	return (dup);
}

/*int main(void)
{
	char	a[] = "ahsbasbch";
	printf("%s\n", ft_strdup(a));
	printf("%s\n", strdup(a));
}*/
