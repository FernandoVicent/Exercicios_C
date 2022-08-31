#include <stdio.h>

int main(){
    int x;
    int y;
    printf("digite um número: ");
    scanf("%d", &x);
    printf("digite um segundo número: ");
    scanf("%d", &y);
    int z = x * y;
    printf("A multiplicacao de %d por %d é igual a %d\n", x, y, z);
}