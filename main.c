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
    no *k=NULL;
    int i;
    for(i=0;i<7;i++){
        insereArvore(&k,v[i]);
    }
    imprimeArvore(k);

    return 0;
}
