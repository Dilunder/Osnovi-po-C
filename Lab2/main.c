#include <stdio.h>
#include <math.h>

int main() {
    double alpha, z1, z2;
    printf("Enter alpha:\n");
    scanf("%lf", &alpha);
    z1 = 2 * sin(3 * M_PI - 2 * alpha) * sin(3 * M_PI - 2 * alpha) * cos(5 * M_PI + 2 * alpha) * cos(5 * M_PI + 2 * alpha);
    z2 = ((double) 1) / 4 - (((double) 1) / 4 * sin(((double) 5) / 2 * M_PI - (8 * alpha)));
    printf("Z1 = %lf and Z2 = %lf", z1, z2);
    return 0;
}