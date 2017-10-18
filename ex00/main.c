#include <stdio.h>
#include <string.h>

void ft_putchar(char c);

int ft_strcmp(char *s1, char *s2);

int main()
{
	char w1[] = "abcdR";
	char w2[] = "abcd";


	printf("ftcmp %d", ft_strcmp(w1, w2));
	printf("ftcmp %d", ft_strcmp(w1, w2));
	
}


