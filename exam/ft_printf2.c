#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_strlen(const char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
void ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648");
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + '0');
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}
void ft_hexa_putnbr(unsigned long nbr)
{
	char *base = "0123456789abcdef";

	if (nbr >= 0 && nbr < 16)
		ft_putchar(base[nbr]);
	if (nbr >= 16)
	{
		ft_hexa_putnbr(nbr / 16);
		ft_putchar(base[nbr % 16]);
	}
}
int ft_count(int nbr)
{
	int i;
	i = 0;
    
    if (nbr <= 0)
    {
        nbr = nbr * -1;
        i++;
    }
    
	while(nbr != '\0')
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
int ft_hexa_count(unsigned long int nbr)
{
	int i;
	i = 0;

    while(nbr != '\0')
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}
int ft_printf(char *format, ...)
{
	va_list arg;
	int i;
	int count;
	char *string;
	int nbr;
	unsigned long int hexa_nbr;
	
	i = 0;
	count = 0;
	va_start(arg, format);

	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				string = va_arg(arg, char *);
				if (!string)
				{
					ft_putstr("(null)");
					count += 6;
				}
				else
				{
					ft_putstr(string);
					count += ft_strlen(string);
				}
			}
			if (format[i] == 'd')
			{
				nbr = va_arg(arg, int);
				ft_putnbr(nbr);
				count += ft_count(nbr);
			}
			if (format[i] == 'x')
			{
				hexa_nbr = va_arg(arg, unsigned long int);
				ft_hexa_putnbr(hexa_nbr);
				count += ft_hexa_count(hexa_nbr);
			}
		}
		else
		{
			ft_putchar(format[i]);
			count += 1;
		}
		i++;
	}
	va_end(arg);
	return (count);
}

int main ()
{
    int test = -42;
    ft_printf("%d\n", ft_printf("Mahad! %d %x %s\n", test, test, "ok"));
    printf("%d\n", printf("Mahad! %d %x %s\n", test, test, "ok"));
    
    ft_printf("%s\n", "toto");
    ft_printf("Magic %s is %d\n", "number", 42);
    ft_printf("Hexadecimal for %d is %x\n", 42, 42);
}
