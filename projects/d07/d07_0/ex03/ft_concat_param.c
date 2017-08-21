/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:23:20 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/21 19:59:56 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		len;
	char 	*s;

	s = str;
	len = 0;
	while (s != 0 && s[len] != 0)
		len++;
	return (len);
}

char    *ft_strcat(char *des, char *src)
{
	int     i;
	int     j;
	char    *s;

	s = src;
	i = ft_strlen(des);
	j = 0;
	while (s[j] != 0)
	{
		des[i + j] = s[j];
		j++;
	}
	des[i + j] = '\n';
	return (des);
}

char *ft_concat_params(int argc, char **argv)
{
	int		i;
	int		arg_len;
	char	*s;
	
	i = 1;
	arg_len = 0;
	if (argc > 0 && argv[1] != 0)
	{
		while (i < argc)
			arg_len += ft_strlen(argv[i++]);
		arg_len += i;
		s = (char *)malloc(sizeof(char) * arg_len);
		i = 1;
		while (i < argc)
		{
			ft_strcat(s, argv[i]);
			i++;
		}
		s[arg_len] = 0;
	}
    return (s);
}

int		main(int argc, char **argv)
{
	int		i;
	int		arg_len;
	char	*s;
	
	i = 1;
	arg_len = 0;
	if (argc > 0 && argv[1] != 0)
	{
        printf("%s",ft_concat_params(argc,argv));
	}
	else if (argc > 0)
		printf("Error : No arguments!");
	else if (argv[1] != 0)
		printf("Error : Empty argument!");
	return (0);
}
