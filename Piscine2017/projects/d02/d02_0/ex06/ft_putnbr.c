/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:07:51 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/09 12:09:06 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    int             d;
    unsigned int    n;

    d = 1;
    if (nb < 0)
        n = -nb;
    else
        n = nb;
    while ((n / d) > 10)
        d *= 10;
    while (n)
    {
        ft_putchar((n / d) + '0');
        n %= d;
        d /= 10;
    }
}
