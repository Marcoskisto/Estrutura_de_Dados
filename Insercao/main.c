#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#include "listaEncadeada.h"



int main()
{
    typedef struct celula cel;
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

}
