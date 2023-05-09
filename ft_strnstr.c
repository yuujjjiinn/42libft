/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:03:20 by yuchen            #+#    #+#             */
/*   Updated: 2023/05/05 16:03:21 by yuchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		n;
	const char	*p;

	if (*little == '\0')
		return (big);
	while (*big)
	{
		n = len;
		p = big;
		while ((*p == *little) && n--)
		{
			p++;
			little++;
		}
		if (n == 0)
			return (big);
	}
	return (NULL);
}
