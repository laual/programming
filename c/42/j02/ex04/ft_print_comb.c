#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_comb(void)
{
    int centaine, dizaine, unite;

    centaine = '0';
    while (centaine <= '7')
    {
	dizaine = centaine + 1;
	while (dizaine <= '8')
	{
	    unite = dizaine + 1;
	    while (unite <= '9')
	    {
		ft_putchar(centaine);
		ft_putchar(dizaine);
		ft_putchar(unite);
		ft_putchar(',');
		ft_putchar(' ');
		unite++;
	    }
	    dizaine++;    
	}
	centaine++;
    }
}

int	main(void)
{
    ft_print_comb();
    return (0);
}
