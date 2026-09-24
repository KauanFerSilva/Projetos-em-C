#include <stdio.h>

int main(void) {
    char alfabeto[26] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    char palavra[100];
    int chave;

    // 1. Pergunta qual será a chave de deslocamento
    printf("Digite o valor do deslocamento (chave): ");
    scanf("%d", &chave);

    // 2. Mostra o alfabeto original
    printf("\nAlfabeto Original: ");
    for (int i = 0; i < 26; i++) {
        printf("%c ", alfabeto[i]);
    }

    // 3. Mostra o alfabeto cifrado usando a chave digitada
    printf("\nAlfabeto Cifrado  : ");
    for (int i = 0; i < 26; i++) {
        printf("%c ", alfabeto[(i + chave) % 26]);
    }

    // 4. Lê a palavra informada pelo usuário
    printf("\n\nDigite uma palavra em maiusculas: ");
    scanf("%s", palavra);

    // 5. Criptografa e mostra o resultado
    printf("Palavra Criptografada: ");
    for (int i = 0; palavra[i] != '\0'; i++) {
        for (int j = 0; j < 26; j++) {
            if (palavra[i] == alfabeto[j]) {
                printf("%c", alfabeto[(j + chave) % 26]);
            }
        }
    }

    printf("\n");
    return 0;
}
