/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:23:20 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/18 16:55:56 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 1;
	while (*str++ != 0)
		len++;
	return (len);
}

char *ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		len;
	int		i;
	int 	j;

	j = 1;
	i = 0;
	len = 0;
	while (argv[j] != 0)
		len += ft_strlen(argv[j++]);
	if (argc > 0)
		args = (char *)malloc(sizeof(int)*len);
	else
	{
		args = NULL;
		return (args);
	}
	j = 1;
	argv++;
	while(j < len)
	{
		while (*argv[i] != 0)
		{
			*args++ = *argv[i];
			i++;
		}
		args++;
		*args = '\n';
		i = 0;
		argv++;
	}
	return (args);
}

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s", ft_concat_params(argc, argv));
	}
	return (0);
}
