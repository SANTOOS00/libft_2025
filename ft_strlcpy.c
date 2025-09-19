#include <unistd.h>

size_t 	ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int x;

    i = 0;
    x = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && size - 1 > i)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[x] != '\0')
    {
        x++;
    }
    return (x);
}