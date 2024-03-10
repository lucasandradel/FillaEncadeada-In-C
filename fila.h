#ifndef __LISTA_H__
#define __LISTA_H__


#include <stdio.h>
#include <stdlib.h>

struct est_no
{
    int valor;
    struct est_no **prox;
};
typedef struct est_no tipo_no;


tipo_no *alocaNo(int);
void insereFimfila(tipo_no **, int);
int RemoveFila(tipo_no **);
void imprimeFila(tipo_no*);
int contaValoresFila(tipo_no *);




#endif
