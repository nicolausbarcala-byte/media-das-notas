#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i, senha, opcao;

    // PARTE 1 - CADASTRO DE NOTAS

    printf("===== CADASTRO DE NOTAS =====\n");

    for (i = 1; i <= 5; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / 5;

    printf("\nMedia da turma: %.2f\n", media);

    // PARTE 2 - SENHA DE ACESSO

    printf("\n===== LOGIN =====\n");
    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");

    // PARTE 3 - MENU INTERATIVO

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Consultar media\n");
        printf("2 - Exibir mensagem de boas-vindas\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Media da turma: %.2f\n", media);
                break;

            case 2:
                printf("Bem-vindo ao sistema de notas!\n");
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}

