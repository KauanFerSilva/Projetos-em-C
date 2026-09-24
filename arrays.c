#include <stdio.h>
#include <stdlib.h>

int main(){
    //variaveis
    int cont;
    int vet[5]; //0 --- 4   0/1/2/3/4

    //entrada de dados
    for (cont = 0; cont < 5; cont++) {
        printf("Entre com um numero: ");
        scanf("%d",&vet[cont]);
    }
    for (cont = 0; cont <5; cont++){
        printf("\nO numero armazenado no vetor %d = %d\n", cont + 1, vet[cont]);
    }
return 0;
}
