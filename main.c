#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#include "listaEncadeada.h"
#include "ordenacao.h"
#include "arvore.h"

int main()
{
    typedef struct celula cel;
    int v[]={7,4,3,5,10,100,1};
    int v2[]={4,3,2,1,10,8,7,20,30,100,200,0};
    int v3[]={4,3,2,1,10,8,7,20,30,100,200,0};
    cel *lst;
    lst=vetorToListaCabeca(v,7);
    printListaSemCabeca(lst);
    ordenacaoSelecao_ListaEncadeada(lst);
    printf("\n\n");
    printListaSemCabeca(lst);
    return 0;
}
