#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#include "listaEncadeada.h"
#include "ordenacao.h"

int main()
{
    typedef struct celula cel;
    int v[]={7,4,3,5,10,100,1};
    int v2[]={4,3,2,1,10,8,7,20,30,100,200,0};
    int v3[]={4,3,2,1,10,8,7,20,30,100,200,0};
    printVetorInt(v,7);
    printf("\n");
    ordenacaoInsercao_Vetor(v,7);
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
    lst = vetorToListaCabeca(v2,12);
    printListaSemCabeca(lst);
    ordenacaoInsercao_ListaEncadeada(lst);
    printf("\n");
    printListaSemCabeca(lst);
    //ordenacaoInsercaoEncadeada(lst);
    //printListaSemCabeca(lst);
    printf("\n\nVetor desordenado: ");
    printVetorInt(v3,12);
    ordenacaoSelecao_Vetor(v3,12);
    printf("\n");
    printVetorInt(v3,12);
    return 0;
}
