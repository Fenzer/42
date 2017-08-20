/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:51:47 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/15 20:49:58 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		res;

	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (res);
}
