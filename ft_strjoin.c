#include <stdlib.h>

size_t ft_strlen(char const *str)
{
    size_t i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
    {
        return (NULL);
    }
    size_t sizes1 = ft_strlen(s1);
    size_t sizes2 = ft_strlen(s2);
    size_t i1 = 0;
    size_t i2 = 0;
    size_t len = 0;

    char *str = malloc(sizeof(char) * (sizes1 + sizes2 + 1));
    if (!str)
    {
        return (NULL);
    }

    while (i1 < sizes1)
    {
        str[len++] = s1[i1++];
    }
    while (i2 < sizes2)
    {
        str[len++] = s2[i2++];
    }
    str[len] = '\0';
    return (str);
}

#include <stdio.h>
int main()
{
    char s1[] = "simo ";
    char s2[] = "santoos";

    char *str = ft_strjoin(s1,s2);
    printf ("%s",str);
    free(str);
}