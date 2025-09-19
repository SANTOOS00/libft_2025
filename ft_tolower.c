#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c , 1);
}
void ft_totower(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        ft_putchar(from);
        ft_putchar(to);
        ft_putchar('\n');
        return;
    }
    ft_totower(n - 1, from, to, aux);
    ft_putchar(from);
    ft_putchar(to);
    ft_putchar('\n');
    ft_totower(n - 1,aux,from,to);
}