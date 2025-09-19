
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t n;
    unsigned char *d = (void *)dest;
    unsigned const char *s = (void const *)src;

    n = 0;
    if (s > d)
    {
        while (n < len)
        {
            d[n] = s[n];
            n++;
        }
    }
    else 
    {
        n = len - 1;
        while (n > 0)
        {
            d[n] = s[n];
            n--;
        }
    }
    return (dest);
}