#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#include <stdlib.h>
#include <unistd.h>
// to prevent the redefinition of struct we use typedef t_stock_str
// where t in t_stock_str stand for typedef and s in s_stock_str stand
// for struct
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
}		        t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif
