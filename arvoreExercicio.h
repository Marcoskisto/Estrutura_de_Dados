#include <stdio>

typedef struct lista{
	no *end;
	struct lista *prox;

}Lista;



int somaRecursivo(no *r){
	int total=(*r)->valor;
	if(r==NULL) return 0; 
	else{	
		total=total+soma(r->dir);
		total=total+soma(r->esq);
	}
	return total;
}



void somaIterativo(no *r){
	int total=0;
	no *aux;
	Lista *p
	Lista *lst=malloc(sizeof(lista));
	lst->end=r;
	p=lst;
	lst->prox=NULL;
	while(lst!=NULL){
		if((*r)->esq!=NULL){
			aux=malloc(sizeof(Lista));
			aux->end=(*r)->esq;
			aux->prox=NULL
			p->prox=aux;		
		}
		if((*r)->dir!=NULL){
			aux=malloc(sizeof(Lista));
			aux->end=(*r)->dir;
			aux->prox=NULL;
			p->prox=aux;
		}
		total=total+lst->valor
		lst=lst->prox;
	}
}

int comparacaoEspelhada(no *r1, no *r2){
	int teste=0;
	teste=teste+comparacaoEspelhada((*r1)->dir,(*r2)->esq);
	teste=teste+comparacaoEspelhada((*r1)->esq,(*r2)->dir);
	if(r1==NULL && r2==NULL) teste=teste+0;
	else if(r1==NULL || r2==NULL) teste=teste+1;
	else if(r1!=NULL && r2==NULL){	
		if((*r1)->valor==(*r2)->valor) teste=teste+0;
		else teste=teste+1;
	}
	return teste;	 
}

