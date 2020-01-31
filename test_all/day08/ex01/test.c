#include <stdio.h>
#include "ft.h"

//int ft_strlen(char *a);
//void ft_putstr(char *c);
//int ft_strcmp(char *s1, char *s2);

int main(void)
{
	printf("123 - %d\n", ft_strlen("123"));
	ft_putstr("String\n");
	printf("A - a = %d\n", ft_strcmp("A", "a"));
	printf("Zzzz - Zzzz = %d\n", ft_strcmp("Zzzz", "Zzzz"));
	return (0);
}
