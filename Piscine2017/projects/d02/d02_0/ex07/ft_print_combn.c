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
#include <stdio.h>

/*_***************************************************************_*/

void    ft_putc(char c);
void    ft_puts(char *s);
void    ft_print_combn(int n);
int     ft_atoi(char *a);
void	ft_putnbr(int nb);

/*_***************************************************************_*/

void    ft_puts(char *s)
{
    while (*s != 0)
        ft_putc(*s++);
}

/*_***************************************************************_*/

void    ft_putc(char c)
{
    write(1, &c, 1);
}

/*_***************************************************************_*/

void    ft_print_combn(int n)
{
    int     i;
    char    t[n];

    i = 0;
    if (n < 0 || n >= 10)
        return;
    else if (n == 0)
    {
        ft_putnbr(0);
        ft_putc('.');
        ft_putc('\n');
    }
    else
    {
        while (i < n)
        {
            t[i] = i + '0';
            i++;
        }
        i--;
        t[n] = 0;
        while(*t < (10 - n) + '0')
        {
        ft_puts(t);
        ft_putc(',');
        ft_putc(' ');
            while (t[i] < 10 - (n - i) + '0')
            {  
                t[i]++;
                ft_puts(t);
                ft_putc(',');
                ft_putc(' ');
                if (t[i] == 10 - (n - i) + 0) 
                {
                    if (i > 0)
                    {
                        t[i - 1]++;
                        t[i] = t[i - 1];
                    }
                    else
                        break;
                }
            }
            i--;
        }
        ft_putc('\n');
        /*while(i)
          {
          if (t[i] < (10 - (n - i))  + '0')  
          {
          t[i]++;
          if (t[i] == (10 - (n - i))  + '0')
          {
          t[i - 1]++;
          t[i] = i;
          }
          }
          else
          i--;
          ft_puts(t);
          ft_putc('\n');
          }*/
    }
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
