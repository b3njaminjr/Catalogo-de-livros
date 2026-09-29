#ifndef LIVRO_H
#define LIVRO_H

#define TAM_LIVROS 50


typedef struct {
    char *nome;
    float preco;
} Livro;


void menuLivros(void);
void cadastrarLivros ();