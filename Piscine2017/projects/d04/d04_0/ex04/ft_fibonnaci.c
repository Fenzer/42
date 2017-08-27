/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnaci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:55:39 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/15 16:56:47 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int		res;

	if (index < 0)
		return (-1);
	if (index == 0)
		res = 0;
	if (index == 1)
		res = 1;
	while (index > 1)
	{
		return (res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (res);
}
