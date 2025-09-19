#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t len;
    unsigned char ch;
    unsigned char *str;
    
    
    ch = c;
    str = (void *)s;
    len = 0;
    while (len < n)
    {
        str[len++] = ch;
    }
    return (s);
}