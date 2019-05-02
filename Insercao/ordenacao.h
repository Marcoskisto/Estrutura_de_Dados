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
void ordenacaoInsercao_ListaEncadeada(cel *lst){
    cel *ultimo=lst->prox;
    cel *ultimoAnterior=lst;
    cel *atual;
    cel *anterior;
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
