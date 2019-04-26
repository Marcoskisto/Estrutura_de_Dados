#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#include "listaEncadeada.h"
void ordenacaoInsercaoEncadeada(cel2 *lst){
    cel2 *i, *j, *aux;
    i=aux->prox;
    int x;
    for(i; i!=NULL; i=i->prox){
        x=i->valor;
        for(j=i; (j!=lst) && (j->valor>x); j=j->ant){
            aux=j->prox;
            aux->valor=j->valor;
        }
        aux=j->prox;
        aux->valor=x;

        }
}


int main()
{
    typedef struct celula cel;
    typedef struct celulaDupla cel2;
    int v[]={7,4,3,5,10,100,0};
    printVetorInt(v,7);
    printf("\n");
    ordenacaoInsercao(v,7);
    printVetorInt(v,7);
    printf("\n\n\n");
    cel *lst=novaCelula(-1);
    cel *c=novaCelula(30);
    insereNaLista_Cabeca(lst,c);
    c=novaCelula(40);
    insereNaLista_Cabeca(lst,c);
    printf("\n");
    printListaSemCabeca(lst);
    c=novaCelula(99);
    insereNaLista_SemCabeca(&lst,c);
    printf("\n");
    printListaSemCabeca(lst);
    ordenacaoInsercaoEncadeada(lst);
    printListaSemCabeca(lst);

}
