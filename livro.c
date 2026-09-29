#include "livro.h"

int menuLivros(void) {
    int opcao;
    printf("Digite 1 para cadastro de livros\n");
    printf("Digite 2 para listar livros\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    return opcao;
}


void cadastrarLivros () {
    Livro novoLivro = {0};
    printf("======Cadastro de Livros======");

    printf("Digite o nome do livro: ")
    scanf(" %[^\n]", novoLivro.nome);

    printf("Digite o preco do livro: ");
    scanf(" %f[^\n]", novoLivro.preco);


    printf("Cadastro realizado com sucesso\n");

    return;
}




