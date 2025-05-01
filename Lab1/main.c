# include <stdio.h>
int main(){
    int number;
    char symbol;
    printf("Enter a symbol and a number: \n");
    scanf("%c %d", &symbol, &number);
    printf("The symbol was: %d. The number was: %d\n", symbol, number);
    return 0;
}
