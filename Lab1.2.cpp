#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
    int *data, num ;
    GetSet( &data, &num ) ;
    return 0 ;
}

void GetSet(int a[], int *num) {
    printf("Number Main : ");
    scanf("%d", num);

    a = (int *)malloc((*num) * sizeof(int));
    
    for (int i = 0; i < *num; i++) {
        printf("Number AddData [%d]: ", i + 1 );
        scanf("%d", &(a[i]));
    }

    printf("Total Number : %d\n", *num);
    printf("Set Number : ");
    for (int i = 0; i < *num; i++) {
        printf("%d ", a[i]);
    }
    free(a);
}
