#include <unistd.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int x;

    i = 0;
    if (needle[0] == '\0')
    {
        return (char *)haystack;
    }
    while(haystack[i] != '\0' && len > i)
    {
        x = 0;
        while (haystack[i + x] == needle[x] && needle[x] && len > (i + x))
        {
            x++;
        }
        if (needle[x] == '\0')
        {
            return ((char *)haystack + i);
        }
        i++;
    }
    return (0);
}