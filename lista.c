#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node Node;

struct lista{
    Node* prim;
    Node* ult;
};

struct node{
    int conteudo;
    Lista* prox;
};

Lista* inicLista(){
    Lista* lista = (Lista*) malloc (sizeof(Lista));
    lista -> prim = lista -> ult = NULL;
    return lista;
}

void insere(Lista* lista, int numero){
    Node* node = (Node*) malloc (sizeof(Node));
    node -> conteudo = numero;
    node -> prox = inicLista();

    node -> prox -> prim = lista -> prim;

    lista -> prim = node;

}

void imprime(Lista* lista){
    Node* p = lista -> prim;

    if(p == NULL) return;
    else{
        printf("%d\n", p -> conteudo);
        imprime(p -> prox);
    }
}

Lista* retira(Lista* lista, int numero){
    Node* p = lista -> prim;
    if(p == NULL){
        return lista;
    }
    else if(p -> conteudo == numero){
        lista -> prim = p -> prox -> prim;
        free(p -> prox);
        free(p);
    }
    else{
        p -> prox = retira(p -> prox, numero);
    }

    return lista;
}
Lista* deleta(Lista* lista){
    Node* p = lista -> prim;

    if(p == NULL){
        free(lista);
        return NULL;
    }
    else{
        lista -> prim = p -> prox -> prim;
        p -> prox = deleta(p -> prox);
        free(p);
    }
    free(lista);
}