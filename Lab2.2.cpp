#include <string.h>
#include <stdio.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}//end function

char* reverse( char str1[]) {
    int length = strlen( str1 ) ;

    for ( int i = 0 ; i < length/2 ; i++ )
    {
        char temp = str1[i];
        str1 [i] = str1[length - i - 1] ;
        str1[length - i - 1] = temp ;
    }//end for

    printf ( "Reverse : %s \n " , str1 ) ;
    return str1 ;
}//end function
