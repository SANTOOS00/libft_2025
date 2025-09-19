#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len;
    size_t ledest;
    size_t lesrc;

    len = 0;
    ledest = ft_strlen(dest);
    lesrc = ft_strlen((char *)src);
    if (size <= ledest)
    {
        return (size + lesrc);
    }
    while (dest[ledest + len] != '\0' && (ledest + len) < size - 1)
    {
        dest[ledest + len] = src[len];
        len++;
    }
    return (ledest + lesrc);
}