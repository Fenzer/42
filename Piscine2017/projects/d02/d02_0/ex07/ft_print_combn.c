/*_***************************************************************_**
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
**_***************************************************************_*/

#include <unistd.h>

/*_***************************************************************_*/

void    ft_putc(char c);
void    ft_puts(char *s);
void    ft_print_combn(int n);
int     ft_atoi(char *a);
void	ft_putnbr(int nb);
void    ft_printr(int *t);

/*_***************************************************************_*/

void    ft_puts(char *s)
{
    while (*s)
        ft_putc(*s++);
}

/*_***************************************************************_*/

void    ft_putc(char c)
{
    write(1, &c, 1);
}

/*_***************************************************************_*/

void ft_printr(int *t)
{
    while (*t)
        ft_putc(*(t++) + '0');
}

/*_***************************************************************_*/

void    ft_print_combn(int n)
{
    int     t[n], i, col;

    i = 0;
    col = n - 1;
    if (n > 0 || n < 10)
        return;
    else if (n == 0)
    {
        ft_putnbr(0);
        ft_putc('.');
        ft_putc('\n');
    }
    while (t[i])
    {
        t[i] = i;
        i++;
    }
    ft_printr(t);
}

/*_***************************************************************_*/

int     ft_atoi(char *a)
{
    int r,s;

    s = 1;
    r = 0; 
    while (*a <= ' ')
        a++;
    if (*a == '-' || *a == '+')
    {
        if (*a == '-')
            s = -1;
        a++;
        if (!(*a >= '0' && *a <= '9'))
            return (r);
    }
    while (*a >= '0' && *a <= '9')
    {
        r *= 10;
        r += *a++ - '0';
    }
    return (s * r);
}

/*_***************************************************************_*/

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
        ft_putc((n / d) + '0');
        n %= d;
        d /= 10;
    }
}
