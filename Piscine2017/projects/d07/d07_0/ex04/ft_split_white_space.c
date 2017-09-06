/*_***************************************************************_*\
** _______________________________________________________________ **
** ___/\\\\\\\\\\\\\\\__/\\\\\\\\\\\\\\\__/\\\\\_____/\\\_________ **
** ___\/\\\///////////__\/\\\///////////__\/\\\\\\___\/\\\________ **
** ____\/\\\_____________\/\\\_____________\/\\\/\\\__\/\\\_______ **
** _____\/\\\\\\\\\\\_____\/\\\\\\\\\\\_____\/\\\//\\\_\/\\\______ **
** ______\/\\\///////______\/\\\///////______\/\\\\//\\\\/\\\_____ **
** _______\/\\\_____________\/\\\_____________\/\\\_\//\\\/\\\____ **
** ________\/\\\_____________\/\\\_____________\/\\\__\//\\\\\\___ **
** _________\/\\\_____________\/\\\\\\\\\\\\\\\_\/\\\___\//\\\\\__ **
** __________\///______________\///////////////__\///_____\/////__ **
** _______________________________________________________________ **
\*_***************************************************************_*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*_***************************************************************_*/

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*_***************************************************************_*/

void    ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

/*_***************************************************************_*/

void    ft_print_words_tables(char **tab)
{
    int     i;

    i = 0;
    while (tab[i])
    {
        ft_putstr(tab[i]);
        ft_putchar('\n');
        i++;
    }
}

/*_***************************************************************_*/
int		ft_wdlen(char *str)
{
	int		n;

	n = 0;
	while (*str == ' ' || *str == '\v' || *str == '\f' 
            ||*str == '\t' || *str == '\n' || *str == '\r')
		str++;
	while (!(*str == ' ' || *str == '\v' || *str == '\f' 
            ||*str == '\t' || *str == '\n' || *str == '\r') 
            && *str != 0)
	{
		n++;
		str++;
		if (*str == ' ' || *str == '\v' || *str == '\f' 
            ||*str == '\t' || *str == '\n' || *str == '\r'
            || *str == 0)
			break;
	}
	return (n);
}

/*_***************************************************************_*/

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;
	
	i = 0;
	len = ft_wdlen(src);
	str = (char *) malloc((len + 1) * sizeof(char));
	while (i <= len)
	{
		str[i] = src[i];
		i++;
	}
    str[len] = 0;
	return(str);
}

/*_***************************************************************_*/

int		ft_wdnbr(char *str)
{
	int		n;

	n = 0;
	while (*str++	 != 0)
	{
		if (!(*str == ' ' || *str == '\v' || *str == '\f' 
            ||*str == '\t' || *str == '\n' || *str == '\r'))
		{
			while (!(*str == ' ' || *str == '\v' || *str == '\f' 
                ||*str == '\t' || *str == '\n' || *str == '\r'
                || *str == 0))
			{
				str++;
				if (*str == ' ' || *str == '\v' || *str == '\f' 
                ||*str == '\t' || *str == '\n' || *str == '\r')
                n++;
			}
		}
		else if (*str != 0)
			str++;
	}
	return n;
}


/*_***************************************************************_*/

char	**ft_split_whitespaces(char *str)
{
	int		tb_len,i;
	char	**wdptr;

    i = 0;
	tb_len = ft_wdnbr(str) + 1;
	wdptr = (char **)malloc(sizeof(char) * tb_len);
    if (wdptr == NULL)
        return (wdptr);
    else
	    wdptr[tb_len] = 0;
	while (i < tb_len)
	{
		while ((*str == ' ' || *str == '\v' || *str == '\f' 
                ||*str == '\t' || *str == '\n' || *str == '\r') 
                && *str != 0)
            str++;
        wdptr[i] = ft_strdup(str);
        if (wdptr[i] == NULL)
            return (wdptr);
        str += ft_wdlen(str);
        i++;
    }
	return (wdptr);
}

/*_***************************************************************_*/

int   main(int ac, char **av)
{
	char	**spltd_wd;
    //int     i = 0;
    
    if (ac  == 2)
	{
		spltd_wd = ft_split_whitespaces(av[1]);
		if (spltd_wd == 0)
            return (0);
        ft_print_words_tables(spltd_wd);
        /*while(spltd_wd[i])
        {
            printf("%s\n",spltd_wd[i]);
            i++;
        }*/
        free(spltd_wd);
	}
	return (0);
}
