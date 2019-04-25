typedef struct celula{
    int valor;
    struct celula *prox;
}cel;

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
