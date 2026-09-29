#ifndef LIVRO_H
#define LIVRO_H

#define MAX 100

typedef struct {
    char nome[50];
    float preco;
} Livro;

void cadastrarLivro();
void listarNomeCrescente();
void listarNomeDecrescente();
void listarPrecoCrescente();
void listarPrecoDecrescente();

#endif
