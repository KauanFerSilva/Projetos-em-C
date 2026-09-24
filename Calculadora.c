#include <stdio.h>
#include <stdlib.h>

int main(){
    //variaveis
    float n1, n2;
    int op;

    //entrada de dados
    printf("Entre com um numero: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("\nEntre com outro numero: ");
    scanf("%f", &n2);
    printf("\nEntre com a opcao desejada:"
           "\n 1. adicao"
           "\n 2. subtracao"
           "\n 3. multiplicacao"
           "\n 4. divisao\n");
    scanf("\n%d", &op);
 
    //processamento
    switch (op){
        case 1:
            printf("\nA soma dos valores %2.f e %.2f e = %.2f", n1, n2, n1+n2);
            break;
        case 2:
            printf("\nA subtracao dos valores %2.f e %.2f e = %.2f", n1, n2, n1-n2);
            break;
        case 3: 
            printf("\nA multiplicacao dos valores %2.f e %.2f e = %.2f", n1, n2, n1*n2);
            break;
        case 4:
            if (n2 == 0){
                printf("\nNenhum numero é divisivel por 0");
            }else{
                printf("\nA divisao dos valores %2.f e %.2f e = %.2f", n1, n2, n1/n2);
            }
            
    }
fflush(stdin);
return 0;
}
