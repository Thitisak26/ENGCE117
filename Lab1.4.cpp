#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *num) {

    printf("Number Main: ");
    scanf("%d", num);

    int *data = (int *)malloc(*num * sizeof(int));

    for (int i = 0; i < *num; i++) {
        printf("Number Element %d: ", i + 1 );
        scanf("%d", &data[i]);
    }

    return data;
}

int main() {
    int *data, num;
    data = GetSet(&num);
    printf("Set Number: ");
    for (int i = 0; i < num; i++)
    {
        printf("| %d |", data[i]);
    }
    return 0;
}#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}

int GetSet(int a[]){
    printf("Number Main : ");
    scanf("%d" , &a[0]);

    for (int i = 1; i <= a[0]; i++)
    {
        printf ("Number Data [%d] : " , i );
        scanf("%d" , &a[i]);
    }

    printf("Number Element : %d\n" , a[0]);
        for (int i = 1; i <= a[0]; i++)
        {
            printf("| %d |" , a[i]);
        }
        
    return a;
}
