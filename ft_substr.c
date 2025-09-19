#include <stdlib.h>

char *ft_substr(char const *s,unsigned int start,size_t len)
{
    size_t lenstart = start;
    size_t i = 0;
    char *str = malloc(len + 1);
    if (!str)
    {
        return (NULL);
    }
    while(i < len && s[lenstart] != '\0')
    {
        str[i++] = s[lenstart];
        lenstart++;
    }
    str[i] = '\0';
    return (str);
}

#include <stdio.h>
int main()
{
    char str[] = "simo santoos";
    unsigned int start = 3;
    char *st = ft_substr(str,start, 12);
    printf ("%s",st);
    free(st);
    return (0);
}