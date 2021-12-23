

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double deg, val, z1, z2, sqr1, sqr2;
    val = PI/180;
    scanf("%lf", &deg);
    sqr1 = (sin(3*val - 2*deg))*(sin(3*val - 2*deg));
    sqr2 = (cos(5*val + 2*deg))*(cos(5*val + 2*deg));
    z1 = 2 * sqr1 * sqr2;
    z2 = 0.25 - 0.25 * sin(2.5*val - 8*deg);
    printf("%lf %lf", z1, z2);
}
