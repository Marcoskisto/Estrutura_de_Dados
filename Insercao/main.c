#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#include "listaEncadeada.h"
void ordenacaoInsercaoEncadeada(cel *lst){
    cel *ultimo=lst->prox;
    cel *atual;
    cel *anterior;
    cel *aux;

    while(ultimo!=NULL){
        atual=lst->prox;
        anterior=lst;
            while(atual!=ultimo){
                if(atual->valor>ultimo->prox){
                    anterior->prox=ultimo;
                    aux=ultimo->prox;
                    ultimo->prox=atual;
                    atual->prox=aux;

                    ultimo=atual;
                }else{
                    atual=atual->prox;
                    anterior=anterior->prox;
                }
            }
            ultimo=ultimo->prox;
        }
}


int main()
{
    typedef struct celula cel;
    typedef struct celulaDupla cel2;
    int v[]={7,4,3,5,10,100,1};
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
    printf("\nInsercao encadeada: ");
    lst = vetorToListaCabeca(v,7);
    printListaSemCabeca(lst);


    //ordenacaoInsercaoEncadeada(lst);
    //printListaSemCabeca(lst);
    return 0;
}
