#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	main(void)
{
    ft_putnbr(42);
    ft_putchar('\n');
    return (0);
}

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int numbera)
{
    if (numbera != 0)
    {
	ft_putnbr(numbera / 10);
	ft_putchar('0' + (numbera % 10));
    }
}
