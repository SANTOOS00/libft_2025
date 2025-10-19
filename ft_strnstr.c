#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bi;
	size_t	lt;

	if (!big && len == 0)
		return (0);
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	bi = 0;
	while (big[bi])
	{
		lt = 0;
		if (big[bi] == little[lt])
		{
			while (big[bi + lt] == little[lt] && len > bi + lt)
			{
				lt++;
			}
			if (!little[lt])
			{
				return ((char *)&big[bi]);
			}
		}
		bi++;
	}
	return (0);
}
int	main(void)
{
	char	str[] = "simo santoos";
	char	little[] = "san";
	char	*st;

	st = ft_strnstr(str, little, 8);
	printf("%s", st);
	return (0);
}
