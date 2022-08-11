#include <unistd.h>
void	ft_is_negative(int n)
{
	char c, b;
	if (n < 0)
	{
		c = 'N';
		write(1, &c, 1);
	}
	else
	{
		b = 'P';
		write(1, &b, 1);
	}
}
#include <stdio.h>

int	main(void)
{
	ft_is_negative(4);
}
