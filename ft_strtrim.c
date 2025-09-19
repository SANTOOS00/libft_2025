#include <stdlib.h>
#include <stdio.h>

int ft_is_valed(char const c,char const *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

size_t ft_strlen(char const *s1)
{
    size_t i;

    i = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    return i;
}
size_t ft_strat(char const *s1, char const *set)
{
    size_t i = ft_strlen(s1) - 1;
    size_t len_end = 0;
    while(i >= 0)
    {
        if ((ft_is_valed(s1[i],set)) == 0)
        {
            return i + 1;
        }
        i--;
    }
    return (i);
}

size_t ft_end(char const *s1, char const *set)
{
    size_t i = 0;
    size_t  len_end = 0;
    while(s1[i] != '\0')
    {
        if ((ft_is_valed(s1[i],set)) == 0)
        {
            return len_end;
        }
        i++;
        len_end++;
    }
    return (len_end);
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t end = ft_end(s1,set);
    size_t start = ft_strat(s1,set);
    char *str = malloc(sizeof(char) *(start - end));
    if (!str)
    {
        return (NULL);
    }
    while (end < start)
    {
        str[i++] = s1[end++];
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char s1[] = "";
    char set[] = "";
    char *str = ft_strtrim(s1,set);
    printf("%s",str);
    free(str);
    return (0); 
}