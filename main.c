#include <stdio.h>
#include "livro.h"

int main() {
    int opcao;

    do {
        printf("\n=== SISTEMA DE LIVROS ===\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar por nome (crescente)\n");
        printf("3 - Listar por nome (decrescente)\n");
        printf("4 - Listar por preco (crescente)\n");
        printf("5 - Listar por preco (decrescente)\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarLivro(); break;
            case 2: listarNomeCrescente(); break;
            case 3: listarNomeDecrescente(); break;
            case 4: listarPrecoCrescente(); break;
            case 5: listarPrecoDecrescente(); break;
        }
    } while (opcao != 0);

    return 0;
}
