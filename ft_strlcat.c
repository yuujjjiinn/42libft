/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:03:52 by yuchen            #+#    #+#             */
/*   Updated: 2023/05/03 19:03:53 by yuchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;

	dlen = ft_strlen(dst);
	dst += dlen;
	while (size - (dlen + 1) && *src)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	dlen += ft_strlen(src);
	return (dlen);
}
