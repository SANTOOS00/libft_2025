#include <stdlib.h>
void *ft_mamchr(void *s, int c, size_t size)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char *)s;
    i = 0;
    while (i < size)
    {
        if (str[i] == (unsigned int)c)
        {
            return (void *)str + i;
        }
        i++;
    }
    return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     unsigned char  str[] = {78,23,22,11,43,100,76};

//     unsigned char *st = ft_mamchr(str,11,7);


//     size_t i;

//     i = st - str;
//     while (i < 7)
//     {
//         printf ("%d, ",str[i]);
//         i++; 
//     }
//     return (0);
// }
