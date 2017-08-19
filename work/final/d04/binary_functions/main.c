/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 08:38:50 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/16 10:28:44 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int		ft_atoi(char *str)
{
	int		i;
	int		n;
	int		s;

	i = 0;
	n = 0; 
	s = 1;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			s = -s;
		i++;
	}	
	while ((str[i] <= '9' && str[i] >= '0') && !(str[i] > '9'))
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * s);
}
int		main(int argc, char **argv)
{
	

	if (argc > 1)
	{
		printf("Atoi : %d\n", atoi(argv[1]));
		printf("ft_ato : %d\n", ft_atoi(argv[1]));
		printf("ft_recursive_factorial  : %d\n", ft_recursive_factorial(ft_atoi(argv[1])));	
		printf("iterative power : %d\n", ft_iterative_power(ft_atoi(argv[1]), ft_atoi(argv[2])));	
		printf("recursive power : %d\n", ft_recursive_power(ft_atoi(argv[1]), ft_atoi(argv[2])));	
		printf("fibonnaci : %d \n", ft_fibonacci(ft_atoi(argv[1])));
		printf("sqrt : %d \n", ft_sqrt(ft_atoi(argv[1])));
		printf("prime : %d \n", ft_is_prime(ft_atoi(argv[1])));
		printf("next prime : %d \n", ft_find_next_prime(ft_atoi(argv[1])));
	}
	return (0);
}
