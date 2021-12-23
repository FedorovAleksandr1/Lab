#include <stdio.h>

int main ()
{

    int iValue;
    int iValue2;
    int iDuration;
    int iTotal;
    int LIMIT = 499;
    printf("Vvedite velichinu abonentskoy platy:  ");
    scanf("%d", &iValue);
    printf("Vvedite stoimost platy za minut sverh limita: ");
    scanf("%d \n", &iValue2);
    printf("Prodoljitelnost razgovorov: ");
    scanf("%d", &iDuration);


    if (iDuration > LIMIT) {
        iTotal = (LIMIT * iValue + (iDuration - LIMIT) * iValue2);
    }
    else iTotal = iValue;
    printf("%d", iTotal);
}

