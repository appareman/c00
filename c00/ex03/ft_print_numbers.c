#include <unistd.h>
void	ft_print_numbers(void)
{
	char	c;
	int		i;

	i = '1';
	while (i <= '9')
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}
#include <stdio.h>

int	main(void)
{
	ft_print_numbers();
}
