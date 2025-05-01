#ifndef LAB11_PRAMOUGOLNIK_H
#define LAB11_PRAMOUGOLNIK_H

typedef struct {
    double x1, x2, y1, y2;
} pr;

void sozd_pr(pr *pramougolnic, double x1, double x2, double y1, double y2);
double square(pr *pramougolnic);
double perimetr(pr *pramougolnic);

#endif
