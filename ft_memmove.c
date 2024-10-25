#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
      char  *d;
      char  *s;
      size_t      i = 0;

      d = (char *)dst;
      s = (char *)src;
      if (d < s) 
      {
            while (len)
            {      
                  d[i] = s[i];
                  i++;
                  len--;
            }
      }
      else if (d > s)
      {
            while (len--)
            {
                  d[len] = s[len];
            }
            
      } 
      return(d);
}
#include <stdio.h>
#include <string.h>

int main () {
   char dest_str[] = "oldstrin";
   char src_str[20]  = "newstring";
   printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
   memmove( dest_str  , src_str, 2);
   printf("After memmove dest = %s, src = %s\n", dest_str, src_str);


   printf("\n-----------------------my function------------------------\n\n");


   char dest[] = "oldstrin";
    char src[]  = "newstring";
   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 2);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   printf("\n%d" , (strcmp(dest_str , dest) == 0));
}