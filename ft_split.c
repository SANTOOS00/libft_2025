#include <stdlib.h>
#include <stdio.h>

int ft_valid(char s, char c)
{
    return (s == c);
}
int ft_strlen_word(char const  *str, char c)
{
    int i;
    int word;

    i = 0;
    word = 0;
    while (str[i] != '\0' && ft_valid(str[i] ,c))
    {
        i++;
    }
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && !ft_valid(str[i],c))
        {
            i++;
        }
        if (str[i] != '\0' && ft_valid(str[i] ,c))
        {
            i++;
            word++;
        }
    }
    printf ("%d",word);
    return (word);
}


char **ft_split(char const *s, char c)
{
    int conutword = ft_strlen_word(s,c);
    char **str;
    int j = 0;
    str = malloc(sizeof(char *) * (conutword + 1));
    if (!str)
    {
        return (NULL);
    }
    while (j < conutword)
    {
        str[j] = ft_strdup(s,c);
    }
    str[j] = NULL;
    return (str);
}
#include <stdio.h>
int main()
{
    char str[] = "   simo mohamed santoos";
    char c = ' ';
    char **st = ft_split(str,c);
    int i = 0 ;
    while (st[i] != NULL)
    {
        printf ("%s",st[i]);
        i++;
    }
    free(st);
    return (0);
}