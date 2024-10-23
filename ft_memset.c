#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    char    *p;

    i = 0;
    p =b;
    while (i < len)
        p[i++] = c;
    return (b);
}
int main() {

    char array [] = "soul";
    char array3 [] = "soul";
    size_t size = 2;
    int length;

    /* Display the initial values */
        printf( "%s ", array );
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memset( array, 99, size );
    memset(array3 , 99, size);
    /* Display the new values */
        printf( "%s--", array );
    printf( "\n" );
        printf( "%s-", array3 );
    return 0;
}