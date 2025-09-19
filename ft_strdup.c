#include <stdlib.h>
int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strdup(const char *str)
{
    int size;
    char *arr;
    int i;

    size = ft_strlen(str);
    arr = malloc(sizeof(char) * (size + 1));
    if (!arr)
    {
        return (NULL);
    }
    i = 0;
    while (size > i)
    {
        arr[i] = str[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}