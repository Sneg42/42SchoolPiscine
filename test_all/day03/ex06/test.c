#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *c);

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

int main (void)
{
	printf("%d\n", ft_strlen("123"));
	
	return (0);
}
