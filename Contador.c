#include <stdio.h>
#include <stdlib.h>

int main(){

    //variaveis
    int n, cont;

    //entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &n);

    //processamento
    for(cont = 0; cont < n; cont++){
        printf("\n%d", cont);
    }

    return 0;
}
