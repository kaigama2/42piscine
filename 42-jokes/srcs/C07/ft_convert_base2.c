#include "../../includes/piscine.h"
#define No_match -1

int ft_unwanted_basetype(char *basetype)
{
    int i;
    int x;
    i = 0;
    
    while (basetype[i])
    {
        if (basetype[i] == ' ' || basetype[i] == '\f' || basetype[i] == 43 || basetype[i] == 45)
            return (false);
        x = i + 1;
        while (basetype[x])
        {
            if (basetype[i] == basetype[x])
                return (false);
            x++;
        }
        i++;
    }
    return (true);
}

int ft_linear_search(char *basetype, char character)
{
    int i;
    i = 0;
    while (basetype[i] != '\0')
    {
        if (basetype[i] == character)
            return (i);
        i++;
    }
    return (No_match);
}

int ft_view_str_len(int base_no, int size, int negative)
{
    int view_length;
    view_length = negative;
    while (true)
    {
        view_length++;
        if (base_no / size == 0)
            break ;
        base_no /= size;
    }
    return (view_length);
}