#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	i = 'a';
	while (i <= 'z')
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}
#include <stdio.h>
int	main(void)
{
	ft_print_alphabet();
}