#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

int main(int argc , char *argv[]){

    tipo_no *minha_fila;

    minha_fila = NULL;

    //inserção de valores na fila
    insereFimfila(&minha_fila, 6);
    insereFimfila(&minha_fila, 2);
    insereFimfila(&minha_fila, 3);
    insereFimfila(&minha_fila, 9);
    insereFimfila(&minha_fila, 10);
    insereFimfila(&minha_fila, 15);
    insereFimfila(&minha_fila, 22);
    insereFimfila(&minha_fila, 99);
    insereFimfila(&minha_fila, 28);

    imprimeFila(minha_fila);

    //contagem da quantidade elementos da fila
    int QtdElementos = contaValoresFila(minha_fila);
    printf("Quantidade de elementos na Fila: (%d)\n", QtdElementos);

    //remoção do primeiro valor da fila
    int valor_removido = RemoveFila(&minha_fila);
    printf("\nvalor (%d) removido da fila\n\n", valor_removido);
    imprimeFila(minha_fila);

    printf("Quantidade de elementos na Fila após remoção: (%d)\n\n", QtdElementos - 1);
    
    return EXIT_SUCCESS;
}