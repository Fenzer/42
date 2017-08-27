/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 10:49:53 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/20 12:16:31 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int		main(void)
{
	int			ret;
	char		buf[64000];
	int			x;
	int			y;
	int			i;

	x = y = i = 0;
	ret = read(0, buf, sizeof(buf));
	buf[ret] = '\0';
	printf("ret : %d", ret);
	printf("buf : %s", buf);
	while (buf[i] != '\n')
	{
		x++;
		i++;
	}
	y = ret / x;
	printf("x : %d", x);
	printf("y : %d", y);
	return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:51:07 by lboulin           #+#    #+#             */
/*   Updated: 2017/08/20 09:19:42 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "ft_put.h"

void	start(int x, int y);
void	mid(int x, int y);
void	end(int x, int y);
void	rush(int x, int y);
int		main(void);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		start(x, y);
	}
}

void	start(int x, int y)
{
	int i;

	i = 2;
	ft_putchar('o');
	while (i < x)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
		ft_putchar('o');
	if (y > 2)
	{
		ft_putchar('\n');
		mid(x, y);
	}
	if (y == 2)
	{
		ft_putchar('\n');
		end(x, y);
	}
	if (y == 1)
		ft_putchar('\n');
}

void	mid(int x, int y)
{
	int i;
	int n;

	i = 2;
	n = 2;
	while (n < y)
	{
		ft_putchar('|');
		while (i < x && x > 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 2;
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		n++;
	}
	end(x, y);
}

void	end(int x, int y)
{
	int i;

	i = 2;
	if (y > 1)
	{
		ft_putchar('o');
	}
	while (i < x)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:51:07 by lboulin           #+#    #+#             */
/*   Updated: 2017/08/20 09:21:36 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "ft_put.h"

void	start(int x, int y);
void	mid(int x, int y);
void	end(int x, int y);
void	rush(int x, int y);
int		main(void);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		start(x, y);
	}
}

void	start(int x, int y)
{
	int i;

	i = 2;
	ft_putchar('/');
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('\\');
	if (y > 2)
	{
		ft_putchar('\n');
		mid(x, y);
	}
	if (y == 2)
	{
		ft_putchar('\n');
		end(x, y);
	}
	if (y == 1)
		ft_putchar('\n');
}

void	mid(int x, int y)
{
	int i;
	int n;

	i = 2;
	n = 2;
	while (n < y)
	{
		ft_putchar('*');
		while (i < x && x > 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 2;
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		n++;
	}
	end(x, y);
}

void	end(int x, int y)
{
	int i;

	i = 2;
	if (y > 1)
	{
		ft_putchar('\\');
	}
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 16:31:49 by bhervas           #+#    #+#             */
/*   Updated: 2017/08/20 09:21:44 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "ft_put.h"

void	start(int x, int y);
void	mid(int x, int y);
void	end(int x, int y);
void	rush(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		start(x, y);
	}
}

void	start(int x, int y)
{
	int i;

	i = 2;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('A');
	if (y > 2)
	{
		ft_putchar('\n');
		mid(x, y);
	}
	if (y == 2)
	{
		ft_putchar('\n');
		end(x, y);
	}
	if (y == 1)
		ft_putchar('\n');
}

void	mid(int x, int y)
{
	int i;
	int n;

	i = 2;
	n = 2;
	while (n < y)
	{
		ft_putchar('B');
		while (i < x && x > 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 2;
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		n++;
	}
	end(x, y);
}

void	end(int x, int y)
{
	int i;

	i = 2;
	if (y > 1)
	{
		ft_putchar('C');
	}
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabreu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:22:15 by mabreu            #+#    #+#             */
/*   Updated: 2017/08/20 09:21:48 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "ft_put.h"

void	rush(int x, int y);
void	startend(int x);
void	mid(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		startend(x);
		ft_putchar('\n');
		if (y > 2)
		{
			mid(x, y);
		}
		if (y > 1)
		{
			startend(x);
			ft_putchar('\n');
		}
	}
}

void	startend(int x)
{
	int i;

	i = 2;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	mid(int x, int y)
{
	int i;
	int n;

	i = 2;
	n = 2;
	while (n < y)
	{
		ft_putchar('B');
		while (i < x && x > 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 2;
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		n++;
	}
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 10:06:12 by bhervas           #+#    #+#             */
/*   Updated: 2017/08/20 09:21:56 by mabreu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "ft_put.h"

void	start(int x, int y);
void	mid(int x, int y);
void	end(int x, int y);
void	rush(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		start(x, y);
	}
}

void	start(int x, int y)
{
	int i;

	i = 2;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	if (y > 2)
	{
		ft_putchar('\n');
		mid(x, y);
	}
	if (y == 2)
	{
		ft_putchar('\n');
		end(x, y);
	}
	if (y == 1)
		ft_putchar('\n');
}

void	mid(int x, int y)
{
	int i;
	int n;

	i = 2;
	n = 2;
	while (n < y)
	{
		ft_putchar('B');
		while (i < x && x > 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 2;
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		n++;
	}
	end(x, y);
}

void	end(int x, int y)
{
	int i;

	i = 2;
	if (y > 1)
	{
		ft_putchar('C');
	}
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}
*/
