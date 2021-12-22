#include <stdio.h>
#include <string.h>
#include <malloc.h>
int NOD(int n1, int n2) {
    while (n1 != n2){
        if (n1 > n2) n1 = n1 - n2;
        else n2 = n2 - n1;
    }
    return n1;
}

int NOK(int n1, int n2) {
    return (n1*n2)/NOD(n1, n2);
}

int * generateArr(int n3, int *length) {
    int i = 0;
    int *array = malloc(4*sizeof(int));
    while(n3/10 > 0) {
        array[i] = n3%10;
        n3 /= 10;
        i++;
    }
    array[i] = n3;
    *length = i;

    return array;
}
