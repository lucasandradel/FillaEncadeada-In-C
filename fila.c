#include "fila.h"


tipo_no *alocaNo(int vl){
    tipo_no *novo_no;
    novo_no = (tipo_no*)malloc(sizeof(tipo_no));
    novo_no->valor =  vl;
    novo_no -> prox = NULL;
    return novo_no;
}

void insereFimfila(tipo_no ** fl, int vl){
    tipo_no *novo_no, *aux;
    novo_no = alocaNo(vl);

    if((*fl) != NULL){
        aux = (*fl);
        while ( aux -> prox != NULL )
        {
            aux = aux -> prox;
        }
        aux -> prox = novo_no;
    
    }else{
        (*fl) = novo_no;
    }
    

}

int RemoveFila(tipo_no **fl){
    tipo_no *aux;
    int vl;

    if ((*fl) == NULL){
        printf("[ERRO NA REMOÇÃ] lista vazia\n");
    }else{
        aux = (*fl);
        vl = aux -> valor;
        (*fl) = (*fl) -> prox;
        free (aux);
        return vl;
    }

}

void imprimeFila(tipo_no *fl){
    printf ("FILA \n\n ");
    while (fl != NULL)
    {
        printf( " [%d] ",fl ->valor);
        fl = fl -> prox;
    }
    printf ("\n\n");
    
}

int contaValoresFila(tipo_no *fl){
    int contador = 0;

    while(fl != NULL){
        contador ++;
        fl = fl -> prox;
        
        
    }
    return contador;

}
