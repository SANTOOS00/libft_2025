#include <stdlib.h>

char *ft_strrchr(char const *str, int c)
{
    size_t len;
    char *s;
    size_t index;
    int i = 0;

    len = 0;
    s = (char *)str;
    while (s[len] != '\0')
    {
        if (s[len] == c)
        {
            index = len;
            i = 1;
        }
        len++;
        if (s[len] == '\0' && i == 1)
        {
            return (s + index);
        }
    }
    return NULL;
}