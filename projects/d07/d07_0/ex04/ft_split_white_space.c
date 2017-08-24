/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_space.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:24:53 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/24 23:57:48 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_wdlen(char *str)
{
	int		n;
	char	*s;

	n = 0;
	s = str;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r')
		s++;
	while (!(*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' ) && *s != 0)
	{
		n++;
		s++;
		if (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == 0)
			break;
	}
	return (n);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	char *s = src;
	int i = 0;

	while (*(s + i) != 0 && i < n)
	{
		*(dest + i) = *(s + i);
		i++;
	}
	while (i < n)
		*(dest + i++) = 0;
	return (dest);
}

int		ft_wdnbr(char *str)
{
	char	*s;
	int		n;

	s = str;
	n = 0;
	while (*s++	 != 0)
	{
		if (!(*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r'))
		{
			while (!(*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' 
						|| *s == 0))
			{
				s++;
				if (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r'
						|| *s == 0)
					n++;
			}
		}
		else if (*s != 0)
			s++;
	}
	return n;
}

char	**ft_split_whitespaces(char *str)
{
	int		wd_len,tb_len,i;
	char	**wdptr;

	tb_len = ft_wdnbr(str) + 1;
	wdptr = (char **)malloc(sizeof(char) * tb_len);
	wdptr[tb_len] = 0;
	while (i < tb_len)
	{
		wd_len = ft_wdlen(str);
		wdptr[i] = (char *)malloc(sizeof(char)*(wd_len + 1));
		while ((*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r') && *str != 0)
			str++;
			if (!(*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'))
			{
				ft_strncpy(wdptr[i], str, wd_len);
				wdptr[i][wd_len + 1] = 0;
				str += wd_len;
			}
		i++;
	}
	return wdptr;
}

 int   main(int ac, char **av)
{
	char	**spltd_wd;
	if (ac > 0)
	{
		printf("\nNbr of Wd :%d\n 1st wd len : %d\n ptr : %s\n", ft_wdnbr(av[1]), ft_wdlen(av[1]), av[1]);
		spltd_wd = ft_split_whitespaces(av[1]);
		while (**spltd_wd++)
			printf("\n%s\n",*spltd_wd);
	}
	return (0);
}
