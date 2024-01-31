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
}
