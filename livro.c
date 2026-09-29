#include <stdio.h>
#include <string.h>
#include "livro.h"

Livro livros[MAX];
int qtd = 0;

void cadastrarLivro() {
    printf("Nome: ");
    scanf(" %49[^\n]", livros[qtd].nome);

    printf("Preco: ");
    scanf("%f", &livros[qtd].preco);

    qtd++;
    printf("Livro cadastrado!\n");
}

void mostrarLivro(Livro l) {
    printf("%s - R$ %.2f\n", l.nome, l.preco);
}

void ordenarPorNome(Livro copia[]) {
    for (int i = 0; i < qtd; i++)
        copia[i] = livros[i];

    for (int i = 0; i < qtd - 1; i++) {
        for (int j = 0; j < qtd - 1 - i; j++) {
            if (strcmp(copia[j].nome, copia[j + 1].nome) > 0) {
                Livro aux = copia[j];
                copia[j] = copia[j + 1];
                copia[j + 1] = aux;
            }
        }
    }
}

void ordenarPorPreco(Livro copia[]) {
    for (int i = 0; i < qtd; i++)
        copia[i] = livros[i];

    for (int i = 0; i < qtd - 1; i++) {
        for (int j = 0; j < qtd - 1 - i; j++) {
            if (copia[j].preco > copia[j + 1].preco) {
                Livro aux = copia[j];
                copia[j] = copia[j + 1];
                copia[j + 1] = aux;
            }
        }
    }
}

void listarNomeCrescente() {
    Livro copia[MAX];
    ordenarPorNome(copia);
    printf("\n--- Nome crescente (A-Z) ---\n");
    for (int i = 0; i < qtd; i++)
        mostrarLivro(copia[i]);
}

void listarNomeDecrescente() {
    Livro copia[MAX];
    ordenarPorNome(copia);
    printf("\n--- Nome decrescente (Z-A) ---\n");
    for (int i = qtd - 1; i >= 0; i--)
        mostrarLivro(copia[i]);
}

void listarPrecoCrescente() {
    Livro copia[MAX];
    ordenarPorPreco(copia);
    printf("\n--- Preco crescente (menor -> maior) ---\n");
    for (int i = 0; i < qtd; i++)
        mostrarLivro(copia[i]);
}

void listarPrecoDecrescente() {
    Livro copia[MAX];
    ordenarPorPreco(copia);
    printf("\n--- Preco decrescente (maior -> menor) ---\n");
    for (int i = qtd - 1; i >= 0; i--)
        mostrarLivro(copia[i]);
}
