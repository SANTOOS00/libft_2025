// char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {

// }
#include <stdio.h>

// دالة بسيطة كتضاعف الرقم
char *double_num(char *str)
{
    return *str =  "simo";
}

// دالة كتزيد 10
int add_ten(int x)
{
    return x + 10;
}

void apply_to_numbers(int *arr, int size, int (*f)(int))
{
    for (int i = 0; i < size; i++)
        arr[i] = f(arr[i]);
}

int main()
{
    char *str[] = {"simo" , "santoos","mohamed"};
    size_t size = 3;


    apply_to_numbers(str, size, double_num);

    printf("After doubling: ");
    for (int i = 0; i < size; i++)
        printf("%d ", str[i]);
    printf("\n");

    apply_to_numbers(str, size, double_num);

    printf("After adding 10: ");
    for (int i = 0; i < size; i++)
        printf("%d ", str[i]);
    printf("\n");

    return 0;
}
