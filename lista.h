#ifndef LISTA_H
#define LISTA_H

typedef struct lista Lista;

Lista* inicLista();

void insere(Lista* lista, int numero);

Lista* retira(Lista* lista, int numero);

void imprime(Lista* lista);

Lista* deleta(Lista* lista);

#endif