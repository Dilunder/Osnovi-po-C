#include <stdio.h>
#include <math.h>

enum day_of_the_week{ // Task 1
    monday = 1,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

struct Circle{
    double x, y, x2, y2;
};

union{
    struct{
        unsigned DSL:1, PPP:1, Link:1;
    }p;
    int q;
}n;

int main() {
    enum day_of_the_week a; // Task 1
    scanf("%d" , &a);
    switch(a){
        case monday:
            printf("Monday\n");
            break;
        case tuesday:
            printf("Tuesday\n");
            break;
        case wednesday:
            printf("Wednesday\n");
            break;
        case thursday:
            printf("Thursday\n");
            break;
        case friday:
            printf("Friday\n");
            break;
        case saturday:
            printf("Saturday\n");
            break;
        case sunday:
            printf("Sunday\n");
            break;
        default:
            printf("None\n");
            break;
    }
    struct Circle circle1; // Task 2
    scanf("%lf %lf %lf %lf", &circle1.x, &circle1.y, &circle1.x2, &circle1.y2);
    double c;
    c = 2 * M_PI * sqrt((circle1.x2 - circle1.x) * (circle1.x2 - circle1.x) + (circle1.y2 - circle1.y) * (circle1.y2 - circle1.y));
    printf("Dlina: %lf\n", c);
    scanf("%x", &n.q); // Task 3
    printf("%u %u %u\n", n.p.DSL, n.p.PPP, n.p.Link);
    return 0;
}
