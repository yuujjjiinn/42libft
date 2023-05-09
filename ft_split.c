/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:45:00 by yuchen            #+#    #+#             */
/*   Updated: 2023/05/07 18:45:08 by yuchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*a;
	int	m;
	int	arr;

	a = s;
	arr = 1;
	while (*a++)
	{
		if (*a == c)
			arr++;
	}
	ptr = (char **)malloc((arr + 1) * sizeof (char*));
	if (ptr == NULL)
		return (NULL);
	arr = 0;
	while(ptr[arr])
	{
		m = 0;
		a = s;
		while(*s++ && *s != c)
			m++;
		**ptr = (char *)malloc((m + 1) * sizeof(char));
		ft_strlcpy(ptr[arr], a, (m + 1));
		if (*s)
			s++;
		arr++;
	}
	
	return (ptr);
}
