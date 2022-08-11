#include <unistd.h>
void	ft_print_comb(void)
{
	int		i;
	char	c;

	i = 012;
	while (i <= 789)
	{
		write(1, &i, 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
}

#include <stdio.h>
int	main(void)
{
	ft_print_comb();
}
