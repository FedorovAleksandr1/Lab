
#include <stdio.h>

int PI = 3.14159265;

struct Circle {

    int R;
};

int CircleS (struct Circle Circ) {
    return 2 * (PI * Circ.R);
}


struct ADSL {
    unsigned int DSL: 1;
    unsigned int PPP: 1;
    unsigned int Link: 1;
};

union ADSLU {
    unsigned u;
    struct ADSL ADSL;
};

int main()
{
    enum Days {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday,
    };

    printf("Day: %d \n", Monday);

    struct Circle Circ = {7};
    printf("Sqr: %d \n", CircleS(Circ));

    union ADSLU ADSLState;
    printf("Turn On: ");
    scanf("%x", &ADSLState.u);
    printf("Play: %d\n", ADSLState.ADSL.DSL);
    printf("Play: %d\n", ADSLState.ADSL.PPP);
    printf("Play: %d\n", ADSLState.ADSL.Link);
}

