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

int     main(int ac, char **av)
{
    if (ac == 2)
        ft_print_combn(ft_atoi(*(++av)));
    else
        ft_puts("Enter a number please \n");
    return (0);
}
