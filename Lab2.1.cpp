#include <string.h>
#include <stdio.h>

void reverse( char str1[] , char str2[] ) ;

int main() {
    char text [50] = " I Love You " ;
    char out [50] ;
    reverse ( text , out ) ;
    return 0 ;
}//end fucntion

/*  Fucntion Name : reverse
    @param Input Char str1 Char
    @param Input Chat str2 Char
*/
void reverse( char str1[] , char str2[] ) {
    int length = strlen( str1 ) ;
    for ( int i = 0 ; i <= length ; i++ )
    {
        str2 [ i ] = str1 [ length - i - 1  ] ;
    }//end for
    printf ( " Text : %s \n " , str1 ) ;
    printf ( " Out : %s \n " , str2 ) ;
}//end fucntion
