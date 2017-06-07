#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    int i;
    for(i='0'; i<'9'+1; ++i)
    {
	ft_putchar(i);
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}
