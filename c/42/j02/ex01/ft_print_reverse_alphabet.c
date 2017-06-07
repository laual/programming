#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

int	main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
    int i;
    
    for(i=122; i > 96; --i)
    {
	ft_putchar(i);
    }
}
