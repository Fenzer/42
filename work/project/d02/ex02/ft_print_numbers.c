/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 15:37:13 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/03 16:10:32 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	int i;
	char a;

	i=0;
	while (i < 10)
	{
		a = '0' + i;
		ft_putchar(i);
	}
	return (0);
}