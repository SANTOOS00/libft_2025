#include <unistd.h>

int ft_strncmp(char const *s1, char const *s2, size_t n)
{
    size_t len;

    len = 0;
    while (len < n && s1[len] && s2[len])
    {
        if (s1[len] != s2[len])
        {
            return((unsigned char)s1[len] - (unsigned char)s2[len]);
        }
        len++;
    }
    return 0;
}