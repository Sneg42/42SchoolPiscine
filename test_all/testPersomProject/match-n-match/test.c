#include <stdio.h>

int match(char *s1, char *s2);

int main()
{
	char *s1 = "main.c";
	char *s2 = "*.c";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "man.c";
	s2 = "m*a.c";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "main.c";
	s2 = "**.c";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "main.c";
	s2 = "*";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "";
	s2 = "*";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "mai";
	s2 = "mai*";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "mai";
	s2 = "main";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "main.c.c";
	s2 = "*.c";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "*abc";
	s2 = "*b";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));


	s1 = "main.c.c";
	s2 = "*****.c";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	s1 = "aaaaaaabc";
	s2 = "*abc";
	printf("s1 = %s, s2 = %s, result = %d\n\n", s1, s2, match(s1, s2));

	return (0);
}
