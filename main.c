#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Lista* listaTeste = inicLista();

    insere(listaTeste, 7);
    insere(listaTeste, 10);
    insere(listaTeste, 2);
    insere(listaTeste, 5);

    listaTeste = retira(listaTeste, 2);
    listaTeste = retira(listaTeste, 11);
    imprime(listaTeste);

    listaTeste = deleta(listaTeste);

    return 0;

}