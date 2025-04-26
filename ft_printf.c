
#include "ft_printf.h"


char check_type(char z)
{
    char *S_type;
    int i;

    i = 0;
    S_type = "cspdiuxX%";
    while(S_type[i])
    {
        if(z == S_type[i])
            return (S_type[i]);
        i++;
    }
    return (0);
}

int print_printf(char S_type, va_list arg)
{
    int p_bytes;

    p_bytes = 0;
    if(S_type == '%')
        p_bytes = ft_putchar('%');
    else if (S_type == 'c')
        p_bytes = ft_putchar(va_arg(arg, int));
    else if (S_type == 's')
        p_bytes = ft_s(va_arg(arg, char *));
    else if (S_type == 'i' || S_type == 'd')
        p_bytes = ft_d(va_arg(arg, int));
    else if (S_type == 'u')
        p_bytes = ft_u(va_arg(arg, unsigned int));
    else if (S_type == 'x' || S_type == 'X')
        p_bytes = ft_x(va_arg(arg, unsigned int), S_type);
    else if (S_type == 'p')
        p_bytes = ft_p(va_arg(arg, unsigned long));
    return(p_bytes);
    
}

int		ft_printf(const char *str, ...)
{
    int i;
    int count;
    va_list arg;

    va_start(arg, str);
    i = 0;
    count = 0;
    while(str[i])
    {
        if(str[i] == '%' && check_type(str[i + 1]))
        {
            count += print_printf(str[i + 1], arg);
            i++;
        }
        else if (str[i] == '%' && !check_type(str[i+1]))
        {
            write(1, "Warning: Invalid specifier", 29);
            return (count);
        }
        else
        {
            write(1, str[i], 1);
            count ++;
        }
        i++;
    }
    va_end(arg);
    return (count);
}