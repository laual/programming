#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	main(void)
{
    ft_putnbr(31687);
    return (0);
}

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int numbera)
{
    int numberb;
    
    while(numbera > 10)
    {
	numberb = numbera % 10;
	ft_putchar('0' + numberb);
	ft_putnbr(numbera / 10);
    }
}
