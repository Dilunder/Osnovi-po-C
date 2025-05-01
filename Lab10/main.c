#include <stdio.h>
#include <math.h>

int NOD(int a, int b) {
    while (a && b)
        if (a >= b)
            a %= b;
        else
            b %= a;
    return a | b;
}

void Rustoyanie(int c, int p[c][2]){
    double z[c][c - 1];
    int t;
    for (int i = 0; i < c; i++) {
        t = 0;
        for (int j = 0; j < c; j++) {
            if(p[i] == p[j]){
                t = 1;
                continue;
            }
            if(t)
                z[i][j - 1] = sqrt((p[i][0]-p[j][0])*(p[i][0]-p[j][0])+(p[i][1]-p[j][1])*(p[i][1]-p[j][1]));
            else
                z[i][j] = sqrt((p[i][0]-p[j][0])*(p[i][0]-p[j][0])+(p[i][1]-p[j][1])*(p[i][1]-p[j][1]));
        }
    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < c - 1; j++) {
            printf("%lf ", z[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a, b; // Task 1
    scanf("%d",&a);
    scanf("%d",&b);
    printf("NOD = %d\n",NOD(a,b));
    printf("NOK = %d\n",a*b / NOD(a,b));
    int c, x, y; // Task 2
    scanf("%d", &c);
    int p[c][2];
    for (int i = 0; i < c; i++) {
        scanf("%d %d",&x, &y);
        p[i][0] = x;
        p[i][1] = y;
    }
    Rustoyanie(c, p);
    return 0;
}
