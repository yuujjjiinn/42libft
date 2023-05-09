/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:14:28 by yuchen            #+#    #+#             */
/*   Updated: 2023/05/02 12:14:33 by yuchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h> //
#include <ctype.h>
#include <string.h>

int main()
{
	char	c;
	char	s[6] = "hello";
	
	c = 'a';
	printf("a is alpha? : %d\n", isalpha(c));
	printf("(ft)? : %d\n", ft_isalpha(c));
	c = '5';
	printf("5 is alpha? : %d\n", isalpha(c));
	printf("(ft)? : %d\n", ft_isalpha(c));
	c = 'A';
	printf("A is alpha? : %d\n", isalpha(c));
	printf("(ft)? : %d\n\n", ft_isalpha(c));
	
	c = 'a';
	printf("a is digit? : %d\n", isdigit(c));
	printf("(ft)? : %d\n", ft_isdigit(c));
	c = '5';
	printf("5 is digit? : %d\n", isdigit(c));
	printf("(ft)? : %d\n\n", ft_isdigit(c));
	
	c = 'a';
	printf("a is alnum? : %d\n", isalnum(c));
	printf("(ft)? : %d\n", ft_isalnum(c));
	c = '-';
	printf("- is alnum? : %d\n", isalnum(c));
	printf("(ft)? : %d\n", ft_isalnum(c));
	c = '5';
	printf("5 is alnum? : %d\n", isalnum(c));
	printf("(ft)? : %d\n\n", ft_isalnum(c));
	
	c = 'a';
	printf("a is ascii? : %d\n", isascii(c));
	printf("(ft)? : %d\n", ft_isascii(c));
	c = 128;
	printf("%c is ascii? : %d\n", c, isascii(c));
	printf("(ft)? : %d\n\n", ft_isascii(c));
	
	c = 'a';
	printf("a is print? : %d\n", isprint(c));
	printf("(ft)? : %d\n", ft_isprint(c));
	c = 31;
	printf("%c is print? : %d\n", c, isprint(c));
	printf("(ft)? : %d\n\n", ft_isprint(c));
	
	printf("hello is strlen? : %ld\n", strlen(s));
	printf("(ft)? : %ld\n\n", ft_strlen(s));
	
	
/*
	size_t	t;
	t = ft_strlen(s);
*/	return (0);

}
