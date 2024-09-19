#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia dois inteiros e imprima um retângulo com as dimensões
digitadas.*/

int main()
{
    int a, b;

    printf("Digite o valor de a(altura): ");
    scanf("%d", &a);
    printf("Digite o valor de b(largura): ");
    scanf("%d", &b);

    for (int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if (i == 1 || i == a || j == 1 || j == b ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
