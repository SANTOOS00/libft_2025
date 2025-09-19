#include <stdlib.h> 

void *ft_memcpy(void *dest ,const void *src, size_t len)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    i = 0;
    d = (void *)dest;
    s = (const void *)src;
    if(!dest || !src)
    {
        return (0);
    }
    while (len > i)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}