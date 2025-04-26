
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(long num);
int ft_putnbr_un(unsigned int num);
int ft_putnbr_hex(unsigned long long num, char format);
int ft_putpointer(void *ptr);

#endif