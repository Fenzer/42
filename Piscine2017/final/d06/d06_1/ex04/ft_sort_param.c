/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:51:56 by fpinson           #+#    #+#             */
/*   Updated: 2017/08/18 13:57:08 by fpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
		if (s1[i] == s2[i] && s1[i] == '\0')
			return (0);
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_arg_comp(int argc, char **argv)
{
	int		i;
	char	*tps;

	i = 0;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tps = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tps;
			i = 0;
		}
		else
			i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 0)
	{
		ft_arg_comp(argc, argv);
		while (i < argc - 1)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
