#include <stdio.h>
#include <string.h>

int main (){
    char a[100], b[100]; // Task 1
    gets(a);
    gets(b);
    strcat(a, b);
    printf("%s\n", a);
    int n, q;// Task 2
    scanf("%d", &n);
    q = strncmp(a, b, n);
    if(q == 0){
        printf("They are the same\n");
    }
    else{
        printf("They are not the same\n");
    }
    int d = strlen(a); // Task 3
    printf("%d\n", d);
    char e; // Task 4
    scanf(" %c", &e);
    if(strchr(a, e) != NULL){
        printf("%d\n", strchr(a, e) - a + 1);
    }
    else{
        printf("None\n");
    }
    printf("%d", strspn(a, b));// Task 5
    return 0;
}
