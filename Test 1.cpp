#include <stdio.h>

/**
 * @param fanction name : main
 * @param input a[6] int
 * @param input b[6] int
 * @param input i int
 * @param char Operator char
 * @param input Answer[7] int
 * @param input carry int
 * @param input k int
 * @param input temp int
 * @return output 0 int
*/
int main (){
    int a[6] ;
    int b[6] ;
    int i = 0 ;
    char Operator ;   
    int Answer[7] ;
    int carry = 0 ;
    int k = 0 ;
    int temp ;
 
        do {
            printf ( "Enter Number A: \n" ) ;
            do
            {   
                printf( "A[%d]: " , i ) ; 
                scanf( "%d" , &a[i] ) ;
                i++ ;              
            } while ( i < 6 ) ; //end do/while

            i = 0 ;
            printf( "Enter Number B: \n" ) ;
            do
            {
                printf( "B[%d]: " , i ) ; 
                scanf( "%d" , &b[i] ) ;
                i++ ;     
            } while ( i < 6 ) ; //end do/while

            printf( "Operator : \n" ) ;
            scanf( " %c", &Operator ) ;

            i = 0 ;
        } while ( Operator != '-' && Operator != '+' ) ; //end do/while

        i = 5 ;
        
        do
        {
            if ( Operator == '+' )
            {
                Answer [i + 1] = ( a[i] + b[i] + carry ) % 10 ;
                carry = ( a[i] + b[i] + carry ) / 10 ;
                printf( "\nIndex:\t\tx\t0\t1\t2\t3\t4\t5\n\n" );
                printf( "Number A:\t\t%d\t%d\t%d\t%d\t%d\t%d\n", a[0], a[1], a[2], a[3], a[4], a[5] ) ;
                printf( "Operator:\t\t\t\t\t\t\t  +\n" ) ;
                printf( "Number B:\t\t%d\t%d\t%d\t%d\t%d\t%d\n", b[0], b[1], b[2], b[3], b[4], b[5] ) ;
                printf( "\t\t--------------------------------------------------\n");
                printf( "Answer:\t\t" ) ;     
            }//end if
            else if( Operator == '-' ) ;
            {
                temp = a[i] - b[i] - carry;
                Answer[i + 1] = (temp < 0) ? temp + 10 : temp;
                carry = (temp < 0) ? 1 : 0;
                printf( "\nIndex:\t\tx\t0\t1\t2\t3\t4\t5\n\n" );
                printf( "Number A:\t\t%d\t%d\t%d\t%d\t%d\t%d\n", a[0], a[1], a[2], a[3], a[4], a[5] ) ;
                printf( "Operator:\t\t\t\t\t\t\t  -\n" ) ;
                printf( "Number B:\t\t%d\t%d\t%d\t%d\t%d\t%d\n", b[0], b[1], b[2], b[3], b[4], b[5] ) ;
                printf( "\t\t--------------------------------------------------\n");
                printf( "Answer:\t\t" ) ;  
            }//end else if
            i--;
        } while ( i >= 0 ) ;//end do/while

        Answer[0] = carry ;       
        
        do
        {          
            printf("%d\t", Answer[k]);
            k++ ;
        } while ( k <= 6 ) ; //end do/while
        printf( "\n\t\t==================================================" );
        return 0 ;
}//end fucntion
