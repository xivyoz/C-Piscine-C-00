#include <unistd.h>

void	ft_is_negative(int n)
{
	int	neg;
	int	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write (1, &neg, 1);
	}
	else
	{
		write (1, &pos, 1);
	}
}
