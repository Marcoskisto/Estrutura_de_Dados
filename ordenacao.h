#ifndef ORDENCAO_H_INCLUDED
#define ORDENCAO_H_INCLUDED



#endif // ORDENCAO_H_INCLUDED

void ordenacaoInsercao_Vetor(int v[], int n){
    int i, j, x;
    for(i=0;i<n;i++){
        x=v[i+1];
        for(j=i; (v[j]>x) && (j>=0); j--)
            v[j+1]=v[j];
        v[j+1]=x;
    }
}

void ordenacaoSelecao_Vetor(int v[], int n){
    int i, j, menor, aux;
    for(i=0;i<n-1;i++){
        menor=i;
        for(j=i+1;j<n;j++){
            if(v[j]<v[menor]) menor=j;
        }
        aux=v[i];
        v[i]=v[menor];
        v[menor]=aux;
    }
}


void ordenacaoInsercao_ListaEncadeada(cel *lst){
    cel *ultimo=lst->prox;
    cel *ultimoAnterior=lst;
    cel *atual, *anterior;
    while(ultimo!=NULL){
        atual=lst->prox;
        anterior=lst;
            while(atual!=ultimo){
                if(atual->valor>ultimo->valor){
                    anterior->prox=ultimo;
                    ultimoAnterior->prox=ultimo->prox;
                    ultimo->prox=atual;
                    ultimo=atual;
                }else{
                    anterior=atual;
                    atual=atual->prox;
                }
            }
            ultimoAnterior=ultimo;
            ultimo=ultimo->prox;
        }
}

void ordenacaoSelecao_ListaEncadeada(cel *lst){
    cel *atual, *aux, *comp, *compAnt, *menor, *menorAnt;
    cel *anterior=lst;
    for(atual=lst->prox;atual->prox!=NULL; atual=atual->prox){
        menor=atual;
        compAnt=anterior;
        for(comp=atual;comp!=NULL; comp=comp->prox){
            if(comp->valor<menor->valor){
                menor=comp;
                menorAnt=compAnt;
            }
            compAnt=compAnt->prox;
        }
    if(menor!=atual){
        menorAnt->prox=atual;
        anterior->prox=menor;
        aux=menor->prox;
        menor->prox=atual->prox;
        atual->prox=aux;
        atual=menor;
        }
    anterior=anterior->prox;
    }
}
