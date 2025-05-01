#include <stdio.h>

int main() {
    //Task 5.1
    int s[7] = {10, 20, 30, 40, 50, 60, 70};
    //sizeof(s) / 4
    for (int i = 0; i < 7; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    //Task 5.2
    int p1[2][2] = {{1, 1}, {1, 4}};
    int p2[2][2] = {{1, 2}, {4, 1}};
    int p3[2][2] = {{0, 0}, {0, 0}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                p3[i][j] += p1[i][k] * p2[k][j];
            }
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf ("%d ", p3[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

