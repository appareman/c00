#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	i = 'z';
	while (i >= 'a')
	{
		c = i;
		write(1, &c, 1);
		i--;
	}
}

#include <stdio.h>

int	main(void)
{
	ft_print_reverse_alphabet();
}