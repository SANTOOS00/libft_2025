#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t len)
{
    size_t  size;
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;


    size = 0;
    while (size < len)
    {
        if (str1[size] != str2[size])
        {
            return (str1[size] - str2[size]);
        }
        size++;
    }
    return (0);
}