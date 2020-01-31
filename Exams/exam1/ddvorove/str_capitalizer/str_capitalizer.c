#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int arg;
	int i;
	int flag;

	arg = 0;
	if (argc == 1)
	{	
		ft_putchar('\n');
		return (0);
	}
	while (++arg < argc)
	{
		i = -1;
		flag = 1;
		while (argv[arg][++i])
		{
			if (flag && argv[arg][i] >= 'a' && argv[arg][i] <= 'z')
			{
				flag = 0;
				argv[arg][i] -= 32;
			}
			else if (argv[arg][i] == ' ' || argv[arg][i] == '\t' || argv[arg][i] == '\n')
				flag = 1;
			else if (!flag && argv[arg][i] >= 'A' && argv[arg][i] <= 'Z')
				argv[arg][i] += 32;
			else
				flag = 0;
			ft_putchar(argv[arg][i]);
		}
		ft_putchar('\n');
	}
	return (0);
}
