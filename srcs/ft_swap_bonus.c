#include "libft.h"

void	ft_swap_int(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void	ft_swap_char(char **ptr1, char **ptr2)
{
    char *tmp;

    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}