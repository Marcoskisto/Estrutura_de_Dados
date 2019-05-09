typedef struct celula{
    int valor;
    struct celula *prox;
}cel;

typedef struct node{
        int valor;
        struct node *esq;
        struct node *dir;
}no;

typedef struct celulaDupla{
    struct celulaDupla *ant;
    int valor;
    struct celulaDupla *prox;
}cel2;

cel * novaCelula(int valorX){
    cel *nova;
    nova = malloc(sizeof(cel));
    nova->valor=valorX;
    nova->prox=NULL;
    return nova;
}

void insereNaLista_Cabeca(cel *lst, cel *nova){
    nova->prox=lst->prox;
    lst->prox=nova;
}

void insereNaLista_SemCabeca(cel **lst, cel *nova){
    nova->prox=*lst;
    *lst=nova;
}

void printListaSemCabeca(cel *lst){
    while(lst!=NULL){
        printf("%i ", lst->valor);
        lst=lst->prox;
    }
}

cel* vetorToListaCabeca(int v[], int n){
    int i;
    i=n-1;
    cel *lst, *celula;
    lst=novaCelula(n);
    lst->valor=-111;
    for(i;i>=0;i--){
        cel *celula=novaCelula(v[i]);
        insereNaLista_Cabeca(lst,celula);
    }
    return lst;
}

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
