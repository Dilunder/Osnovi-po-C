#include <stdlib.h>
#include "pramougolnik.h"

void sozd_pr(pr *pramougolnic, double x1, double x2, double y1, double y2){
    pramougolnic->x1 = x1;
    pramougolnic->x2 = x2;
    pramougolnic->y1 = y1;
    pramougolnic->y2 = y2;
}

double perimetr(pr *pramougolnic){
    double per = (abs(pramougolnic->x2 - pramougolnic->x1) + abs(pramougolnic->y2 - pramougolnic->y1)) * 2;
    return per;
}

double square(pr *pramougolnic){
    double sq = abs(pramougolnic->x2 - pramougolnic->x1) * abs(pramougolnic->y2 - pramougolnic->y1);
    return sq;
}
