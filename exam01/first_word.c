#include <unistd.h>
int	main(int arg1, char **arg2)
{
	int	i;

	i = 0;
	if (arg1 == 2)
	{
		while(arg2[1][i] == ' ' || arg2[1][i] == '\t')
		{
			i ++;
		}
		while(arg2[1][i] != '\0' && arg2[1][i] != ' ' && arg2[1][i] != '\t')
		{
			write(1, &arg2[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
