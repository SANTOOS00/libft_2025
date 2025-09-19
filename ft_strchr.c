#include <stdlib.h>
#include<stdio.h>


char  *ft_strchr(const char *s , int c)
{
    int len;
    char *str;

    str = (char *)s;
    len = 0;
    while (str[len] != '\0')
    {
        if (str[len] == c)
        {
            return str + len;
        }
        len++;
    }
    if (!c)
    {
        return (str + len);
    }

    return (NULL);
}