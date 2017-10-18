void ft_putchar(char c);

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;
	
	i = 2;	
	while (i <= argc)
	{	
		ft_putstr(argv[i-1]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

