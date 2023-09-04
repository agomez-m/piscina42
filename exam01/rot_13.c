#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'm')
				|| (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
			write(1, &str[i], 1);
			i++;
		}
		if ((str[i] >= 'n' && str[i] <= 'z')
				|| (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot13(argv[1]);
	}
	else 
		write(1, "\n", 1);
}

