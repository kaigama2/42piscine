#include "../../includes/piscine.h"

 char *ft_strcat(char *dest, char *src)
 {
     int i;
     i = 0;
     while (*(src + i))
     {
         dest[i] = src[i];
         i++;
     }
     dest[i] = '\0';
     return (dest);
 }
 int main()
 {
     char src[] = "kaigama";
     char dest[8];
     printf("%s\n", ft_strcat(dest, src));
     return (0);
 }