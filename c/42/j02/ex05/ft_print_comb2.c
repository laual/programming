#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	main(void)
{
    ft_print_comb2();
    return (0);
}

void	ft_print_comb2(void)
{
    int d1;
    int	u1;
    int d2;
    int u2;

    for(d1 = '0'; d1 <= '9'; d1++)
    {
	for(u1 = '0'; u1 <= '9'; u1++)
	{
	    for(d2 = '0'; d2 <= '9'; d2++)
	    {
		for(u2 = '0'; u2 <= '9'; u2++)
		{
		    if ((d1+u1) < (d2+u2))
		    {
			ft_putchar(d1);
			ft_putchar(u1);
			ft_putchar(' ');
			ft_putchar(d2);
			ft_putchar(u2);
			ft_putchar(',');
			ft_putchar(' ');
		    }
		}
	    }
	}
}

