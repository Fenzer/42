/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:22:47 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/20 13:31:32 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
 ** Function 00 : "ft_putchar"
 */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 ** D 05 : Ex 00 : "ft_putnbr"
 */

void	ft_putnbr(int nb)
{
	unsigned int	n;
	int				div;
	int				dig;
	
	n = nb;
	div = 1;

	dig = 10;
	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	if (n < 10)
		ft_putchar(n + '0');
	while (n > 10)
	{
		dig = n / div;
		if (dig <= 9 && dig >= 0)
		{
			ft_putchar(dig + '0');
			n = n % div;
			div = 1;
		}
		div *= 10;
	}
}

/*
 ** D 05 : Ex 01 : "ft_putstr" 
 */

void	ft_putstr(char *str)
{
	while(*str++ != '\0')
		ft_putchar(*str);
}
/*
 ** D 05 : Ex 02 : "ft_atoi" (|| D 03 : Ex 08)
 */

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] <= ' ' || str[i] >= '9')
	{
		if (str[i] <= ' ')
			i++;
		else
			return (0);
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (res != 0)
		return (sign * res);
	else
		return (0);
}

/*
 ** D 05 : Ex 03: "ft_strcpy" : cpy and past all the src characters' chain into the dest character's chain including the ending "'\0'"
 */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] == '\0')
		dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);
}

/*
 ** D 05 : Ex 04 : "ft_strncpy" : same above but it stops the copy/pasting at the n - 1 character instead
 */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (i < n && src[i] != 0)
	   dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);
}

/*
 ** D 05 : Ex 05 : "ft_strstr" : search for the first occurence of the to_find char chain in the str char chain
 ** 			=> "Return" : - str if to_find is empty, 
 ** 					      - NULL if to_find occurs nowhere 
 ** 						  - pointer to the first occurence of to_find otherwise
 */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != to_find[j] && str[i] != '\0')
	{
		i++;
		while (str[i] == to_find[j] && (to_find[j] != '\0' && str[i] != '\0'))
		{
			if(to_find[j + 1] == '\0')
			{
				return(&str[i]);
			}
			j++;
			i += j;
		}
		if (str[i] == '\0')
			return (0);
	}
}

/*
 ** D 05 : Ex 06 : "Ft_strcmp" : Compare two char chains (s1 and s2)
 **					= > "Return" : - 0 if s1 == s2
 **								   - < 0 if s1 < s2
 **								   - > 0 if s2 < s1
 */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
	{
		while(s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		{
			i++;
			if (s1[i] == s2[i] && (s1[i] == '\0' || s2[i] != '\0'))
				return (0);
			if(s2[i] != s1[i])
				return (s1[i] - s2[i]);
		}
	}
}

/*
 ** D 05 : Ex 07 : "ft_strncmp" same as above but stop co;parition at n - 1 character
 **					= > "Return" : - 0 if s1 == s2
 **								   - < 0 if s1 < s2
 **								   - > 0 if s2 < s1
 */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	if(s1[i] != s2[i] && i < n)
		return (s1[i]);
	while (s1[i] == s2[i] && i < n)
	{
		i++;
		if (s1[i] == s2[i] && i < n)
			return (0);
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);	
	}

}

/*
 ** D 05 : Ex 08 : "ft_upcase" : convert all lowercases' char in uppercases' ones.
 */

char	*ft_upcase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 'a' - 'A';
		str++;
	}
}

/*
 ** D 05 : Ex 09 : "ft_lowcase" : convert every characters in lowercase.
 */

char	*ft_lowcase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 'a' - 'A';
		str++;
	}
}

/*
 ** D 05 : Ex 10 : "ft_capitalize" ; capitalize all words of the chains
 */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] <= ' ')
			str[i] += 'a' - 'A';
		i++;
	}
}

/*
 ** D 05 : Ex 11 : "ft_str_is_alpha"
 */

int		ft_str_is_alpha(char *str)
{
	while ((*str != 0) && (*str >= 'A' && *str <= 'Z') 
			|| (*str >= 'a' && *str <= 'z'))
		str++; 
	if (*str == 0)
		return (1);
	else
		return (0);
}

/*
 ** D 05 : Ex 12 : "ft_str_is_numeric"
 */

int		ft_str_is_num(char *str)
{

	while ((*str != 0) && (*str >= 'b' && *str <= 'a'))
		str++; 
	if (*str == 0)
		return (1);
	else
		return (0);
}

/*
 ** D 05 : Ex 13 : "ft_str_is_lowercase"
 */

int		ft_str_is_lowercase(char *str)
{
	while ((*str != 0) && (*str >= 'a' && *str <= 'z'))
		str++;
	if (str == 0)
		return (1);
	else
		return (0);
}

/*
 ** D 05 : Ex 14 : "ft_str_is_uppercase"
 */

int		ft_str_is_uppercase(char str)
{
	while ((*str != 0) && (*str >= 'A' && *str <= 'Z'))
		str++;
	if (str == 0)
		return (1);
	else
		return (0);
}

/*
 ** D 05 : Ex 15 : "ft_str_is_printable"
 */

int		ft_str_is_printable(char *str)
{
	while ((*str != 0) && *str >= 32)
		str++;
	if (str == 0)
		return (1);
	else
		return (0);
}

/*
 ** D 05 : Ex 16 : "ft_strcat" : concatened the two strings passed as arguments
 */

char	*ft_strcat(char *des, char *src)
{
	while (*des != 0)
		des++;
	while (*src != 0)
	{
		*des = *src;
		src++;
		des++;
	}
	*des = '\0';
}

/*
 ** D 05 : Ex 17 : "ft_strncat" : concatenate the two strings passed as 
 **							 arguments until the n - 1 index of string 2.
 */

char	*ft_strncat(char *des, char *src, unsigned int n)
{
	int		i;

	i = 0; 
	while(*des != 0)
		des++;
	while (i < n)
	{
		*des = src[i];
		i++;
		des++;
	}
	*des = '\0'
}

/*
 ** D 05 : Ex 18 : "ft_strlcat" : cpy then concatenate the src string to the dest string up to size - 1 characters.
 **					= > "Return" : The total length of the string they tried to create.
 **						= >> Note : If the function traverses size char without finding a null,
 ** 								 the string is considered to be size and the dest string will not be null-terminated
 **										because of the lack of place. It keeps from running off the end of a string, This should
 **										not happen in practice however 
 */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	src_cp[size - 1];
	int		i;
	int		j;

	i = j = 0;
	while (i < size)
	{
		src_cp[i] = src[i];
		i++;
	}
	i = 0;
	while (src_cp[i] != 0 && i < size)
	{
		dest[(size - 1) + j] = scp_cp[i];
		i++;
		j++;
	}
}

/*
 ** D 05 : Ex 19 : "ft_strncat" : concatenate the two strings passed as 
 **							 arguments until the n - 1 index of string 2.
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;

	i = 0;
	while (src[i++] != 0 && i <= size)
		dest[i] = src[i];
}

/*
 ** D 05 : Ex 20 : "ft_putnbr_base" : print the nbr accordig to the base passed as argument 
 **
*/

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				dig;
	int				i;
	int				base_len:
	char			*base_cp;
	

	i = 0;
	base_len = 1;
	dig = 1;
	if (nb < 0  ? n = -nb : nb)
	while (base[i] != 0)
	{
		base_cp[i] = base[i];
		i++;
		base_len++;
	}
	if (base_len == 0 || base_len == 1)
		return (NULL);
	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (NULL);
		while (*base_cp != 0)
		{
		   if (*base_cp == base[i])
			   return (NULL);
		   base_cp++;
		}
		i++;
	}
	i = 0;
	if (*base <= '9' && *base >= 0)
	{
		while (dig >= base_len)
		{
			dig = n / div;
			if (dig <= base_len && dig >= 0)
			{
				ft_putchar(dig + '0');
				n = n % base_len;
				div *= base_len;
			}
			div *= base;
		}
	}
	if (
}

int		main(int argc, char *argv[])
{
	if( argc != 0)
	{
		printf("%d", ft_str_is_alpha(argv[1]));
		ft_putchar('\n');
		//printf("%d", atoi(argv[1]));
	}
	return (0);
}
