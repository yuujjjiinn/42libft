/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:14:59 by yuchen            #+#    #+#             */
/*   Updated: 2023/05/07 18:15:00 by yuchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*re;

	ptr = (char *)malloc((len + 1) * sizeof (char));
	if (ptr == NULL)
		return (NULL);
	re = ptr;
	s += start;
	while (len-- && *s)
	{
		*ptr++ = *s++;
	}
	*ptr = '\0';
	return (re);
}
