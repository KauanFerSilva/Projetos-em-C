int main(){
    //variaveis
    int meninos, meninas, soma;

    //entrada de dados
    printf("Digite o numero de meninos da sala: ");
    scanf("%d", &meninos);
    printf("Digite o numero de meninas da sala: ");
    scanf("%d", &meninas);

    //processameto
    soma = meninos + meninas;
    printf("O total de alunos da sala e: %d", soma);
    if (soma > 40) {
        printf("\nExistem muitos alunos na sala");
         }else{
            printf("\nA quantidade de alunos esta boa");
            }
    //final do código
    fflush (stdin);
    return 0;
}
