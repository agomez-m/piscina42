#include <unistd.h>

void	rush(int x, int y);

int main()
{
    rush(5, 3);
	write(1, "\n", 1);
	rush(5, 1);
	write(1, "\n", 1);
	rush(1, 1);
	write(1, "\n", 1);
	rush(1, 5);
	write(1, "\n", 1);
	rush(4, 4);
	write(1, "\n", 1);
    return 0;
}