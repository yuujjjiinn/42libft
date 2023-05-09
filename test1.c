/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:55:20 by yuchen            #+#    #+#             */
/*   Updated: 2023/05/02 17:55:22 by yuchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
//memset
	char	d[11] = "helloworld";
	char	d1[11] = "helloworld";
	memset(d, 'Z', 4);
	ft_memset(d1, 'Z', 4);
	printf("%s\n",d);
	printf("%s\n",d1);
//bzero
	int	n = 11;
	bzero(d, 5);
	ft_bzero(d1, 5);
	while(n)
	{
	printf("%c",d[n]);
	n--;
	}
	printf("\n");
	n = 11;
	while(n)
	{
	printf("%c",d1[n]);
	n--;
	}
	printf("\n");
//memcpy
	strcpy(d, "helloworld");
	strcpy(d1, "helloworld");
	memcpy(d, "goodbye", 4);
	ft_memcpy(d1, "goodbye", 4);
	printf("%s\n",d);
	printf("%s\n",d1);
//memmove
	memmove(d, "kekeke", 4);
	ft_memmove(d1, "kekeke", 4);
	printf("%s\n",d);
	printf("%s\n",d1);
//strlcpy
	strcpy(d, "helloworld");
	strcpy(d1, "helloworld");
	strlcpy(d,"333",);
}
