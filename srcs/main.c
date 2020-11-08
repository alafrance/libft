#include "../includes/libft.h"
#include <stdio.h>

void *change_content(void *content)
{
    content = "OK !";
    return (content);
}

void deleter(void *content)
{
    content = "coucou";
}
#include <string.h>
int main()
{
    int c = 248;
    printf("%c", c);
}