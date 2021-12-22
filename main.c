

#include <stdio.h>
#include <math.h>


#include <stdio.h>
int main()
{
    unsigned int value, value2;

    printf("Enter hexadecimal value without \"0x\": "); // 1
    scanf("%x", &value);
    printf("IN decimal: %d\n", value); // 2
    printf("IN Octal: %o\n", value >> 2); // 3
    printf("Negative: %o\n", ~value);  // 4

    printf("Enter new octal value without \"0x\": ");
    scanf(" %o", &value2);
    printf("Bitewise or: %o", value | value2);
    return 0;
}
