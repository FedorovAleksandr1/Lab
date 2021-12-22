#include <stdio.h>
#include <string.h>
int main () {
    int N;
    int K;
    scanf ("%d", N);
    char str1 [N];
    char str2 [K];
    for (int i = 0; i < N; i++)
        if (str1[i] == str2[i])
        {
            printf("Элемент совпадает, %d", i );
        }

}

