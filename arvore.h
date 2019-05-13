#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct node{
        int valor;
        struct node *esq;
        struct node *dir;
}no;

typedef struct filaNode{
    struct no *noX;
    struct filaNode *prox;

}filaNo;

void insereArvore(no **r, int x){
	no *aux=*r;
	if(aux!= NULL){
		if(x < aux->valor){
			insereArvore(&aux->esq,x);
		}else{
			insereArvore(&aux->dir,x);
		}
	}else {
	    aux=malloc(sizeof(no));
        aux->valor=x;
        aux->dir=NULL;
        aux->esq=NULL;
        *r=aux;
	}
}

void imprimeArvore(no *r){
	if(r != NULL){
		imprimeArvore(r->esq);
        printf("%d ", r->valor);
        imprimeArvore(r->dir);
	}
}

void imprimeArvorePorNivel(no *r){
    filaNo *inicio=NULL;
    filaNo *fim=NULL;
    filaNo *aux;
    filaNo *lst=malloc(8);
    inicio=malloc(8);
    lst->prox=inicio;
    inicio->noX=r;
    inicio->prox=NULL;
    fim=inicio;
    while(inicio!=NULL){
        r=inicio->noX;
        printf("%d ",r->valor);
        if(r->esq!=NULL){
            aux=malloc(8);
            aux->noX=r->esq;
            aux->prox=NULL;
            fim->prox=aux;
            fim=aux;
        }
        if(r->dir!=NULL){
            aux=malloc(8);
            aux->noX=r->dir;
            aux->prox=NULL;
            fim->prox=aux;
            fim=aux;
        }
        lst->prox=inicio->prox;
        free(inicio);
        inicio=lst->prox;
    }
}

#endif // ARVORE_H_INCLUDED
