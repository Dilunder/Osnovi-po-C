#include <stdio.h>
#include <stdlib.h>

int main() {
    //Task 6.1
    char s[4];
    char *p = s;
    *p = 'a';
    *(p + 1) = 'b';
    *(p + 2) = 'c';
    *(p + 3) = 'd';
    for(int i = 0; i < 4; i++){
        printf("%c ", *(p + i));
    }
    printf("\n");
    //Task 6.2
    char *z = (char *) malloc(4 * sizeof (char));
    char *t = z;
    for(char *t = s; t < s + 4; t++){
        *t = s[t-s];
    }
    for(char *t = s; t < s + 4; t++){
        printf("%c ", *t);
    }
    free(z);
    return 0;
}