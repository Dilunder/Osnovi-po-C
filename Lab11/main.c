#include <stdio.h>
#include "pramougolnik.h"

int main(){
    pr pramougolnic;
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    sozd_pr(&pramougolnic, x1, x2, y1, y2);
    double per = perimetr(&pramougolnic);
    double sq = square(&pramougolnic);
    printf("S = %lf, P = %lf\n", sq, per);
    return 0;
}
