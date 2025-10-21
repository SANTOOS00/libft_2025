#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, libft!";
    int len = ft_strlen(str);
    int num = ft_atoi("12345");
    int neg = ft_atoi("-42");

    printf("String: %s\n", str);
    printf("Length (ft_strlen): %d\n", len);
    printf("ft_atoi(\"12345\") = %d\n", num);
    printf("ft_atoi(\"-42\") = %d\n", neg);

    printf("ft_putchar_fd test: ");
    ft_putchar_fd('A', 1); // 1 يعني نكتب فـ stdout
    ft_putchar_fd('\n', 1);

    return 0;
}
