#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct node{
        int valor;
        struct node *esq;
        struct node *dir;
}no;

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


#endif // ARVORE_H_INCLUDED
