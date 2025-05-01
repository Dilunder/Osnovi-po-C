#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char a[100]; // Task 1
    gets(a);
    int d = strlen(a), q = 0, q1 = 0, q2 = 0;
    for(int i=0;i<d;i++){
        if (isdigit(a[i])) {
            q += 1;
        }
        else if (isalpha(a[i])) {
            if (a[i] > 64 && a[i] < 91){
                q1 += 1;
            }
            else{
                q2 += 1;
            }
        }
    }
    printf("Number of gigits %d, number of uppercase letters %d , number of lowercase letters %d\n", q, q1, q2);
    int b, c, f = 499;// Task 2
    double e, g;
    scanf("%d %d %lf", &b, &c, &e); // Продолжительность разговоров, величина абонентской платы, стоимость минуты сверх лимита.
    while(c / f > e){
        printf("The cost of a minute over the limit mustn't exceed the cost of a minute included in the limit.\n");
        printf("Enter data again\n");
        scanf("%d %d %lf", &b, &c, &e);
    }
    if(f >= b){
        printf("Total price is: %d", c);
    }
    else{
        g = c + e * (b - f);
        printf("Total price is: %lf", g);
    }
    return 0;
}
