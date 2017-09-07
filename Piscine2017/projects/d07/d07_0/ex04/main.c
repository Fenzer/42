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

#include <unistd.h>

/*_***************************************************************_*/

void    ft_putn(int n);

void    ft_putc(char c);

void    ft_puts(char *s);
/*_***************************************************************_*/
void ft_putn(int n)
{
    unsigned int    r;
    int             d;

    d = 1;
    if (n < 0)
    {
        ft_putc('-');
        r = -n;
    }
    else
        r = n;
    while ((r / d) >= 10)
        d *= 10;
    while (r / d)
    {
        ft_putc((r / d) + '0');
        r %= d;
        d /= 10;
    }
}

/*_***************************************************************_*/

void    ft_putc(char c)
{
    write(1, &c, 1);
}
/*_***************************************************************_*/

void    ft_puts(char *s)
{
    while(s != 0)
        ft_putc(*s);
}

/*_***************************************************************_*/

int     main(int ac, char **av)
{
	char	**spltd_wd;
    int     i = 0;
	
    if (ac  == 2)
	{
        ft_puts("Nbr of Wd :"); 
        ft_putn(ft_wdnbr(av[1]));
        ft_puts("1st wd len :") 
        ft_putn(ft_wdlen(av[1]));
        puts(av[1]);
		spltd_wd = ft_split_whitespaces(av[1]);
		if (spltd_wd == 0)
            return (0);
        while (*spltd_wd[i])
        {
            ft_puts(spltd_wd[i]);
            i++;
        }   
        free(spltd_wd);
	}
}