#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#include "listaEncadeada.h"
#include "ordenacao.h"
#include "arvore.h"

int main()
{
    typedef struct celula cel;
    int v[]={7,4,5,0};
    int v2[]={4,3,2,1,10,8,7,20,30,100,200,0};
    int v3[]={4,3,2,1,10,8,7,20,30,100,200,0};

    no *r=NULL;
    int i;
    for(i=0;i<13;i++){
        insereArvore(&r,v3[i]);

    }

    imprimeArvore(r);
    printf("\n");
    imprimeArvorePorNivel(r);


    return 0;
}
