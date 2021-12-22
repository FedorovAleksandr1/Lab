#include <stdio.h>
#include <malloc.h>

int main()
{
    char arr[4] = {'a', 'b', 'c', 'd'};
    char *arr_c = arr;
    for(int i=0; i<4 ; i++){
        printf("%c ", *arr_c++);
    }
    printf("\n");

    char *arr_2 = (char *) malloc(4*sizeof(char));
    arr_2[0] = 'a';
    arr_2[1] = 'b';
    arr_2[2] = 'c';
    arr_2[3] = 'd';
    for(int i=0; i<4; i++) {
        printf("%с ", *arr_2++);
    }
    free(arr_2);
}

