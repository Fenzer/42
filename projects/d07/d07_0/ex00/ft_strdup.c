/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 19:10:26 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/17 21:04:26 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

:#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*ptr;
	
	i = 0;
	len = ft_strlen(src);
	ptr = (char *) malloc(len + 1 * sizeof(char));
	while (i <= len)
	{
		ptr[i] = src[i];
		i++;
	}
	return(ptr);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++ != 0)
		len++;
	return (len);	
}


