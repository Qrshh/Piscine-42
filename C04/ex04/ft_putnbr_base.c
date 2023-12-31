#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while(src[i])
		i++;
	return(i);
}

int	verif_base(char *b)
{
	int	i;
	int	i2;

	if(ft_strlen(b) <= 1)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '+' || b[i] == '-')
			return (0);
		while(b[i2] != '\0')
		{
			if(b[i] == b[i2])
				return (0);
			i2++;
		}
		i++;
		i2 = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	size_base = ft_strlen(base);
	if(verif_base(base) == 1)
	{
		if(nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if(nbr / size_base != 0)
		{
			ft_putnbr_base(nbr / size_base, base);
		}
		ft_putchar(base[nbr % size_base]);
	}
}

int	main(void)
{
	int	nb = 4242;
	char	base[] = "poneyvif";

	ft_putnbr_base(nb, base);
	return (0);
}
