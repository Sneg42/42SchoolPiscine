#include <stdio.h>

int		index_in_str_base(char numb)
{
	char *base = "0123456789abcdef";
	int ind = 0;
	if (numb >= 'A' && numb <= 'Z')
		numb += 32;

	while (base[ind] != numb)
		ind++;
	return (ind);
}

int length_str(const char *str)
{
	int length = 0;
	while (str[length])
		length++;
	return length;
}

int calc_power(int power, int str_base)
{	
	if (power == 0)
		return 1;
	int numb = str_base;
	while (power-- > 1)
		numb *= str_base;
	return numb;
}

int ft_atoi_base(const char *str, int str_base)
{
	int numb = 0;
	int power;
	int pos = 1;
	int index;

	if (*str == '-'){
		pos = -1;
		str++;
	}
	power = length_str(str) - 1;
	while (*str)
	{
		index = index_in_str_base(*str++); 	
		if (index > 16 || index >= str_base)
		   return numb;	
		numb += index * calc_power(power--, str_base);
	}
	return (numb * pos);
}

int main()
{
	char *str = "--223";
	printf("%s = %d\n", str, ft_atoi_base(str, 10));
	
	str = "1bc";
	printf("%s = %d\n", str, ft_atoi_base(str, 11));
	return (0);
}
