void printVetorInt(int v[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%i ", v[i]);
    }
}

void ordenacaoInsercao(int v[], int n){
    int i, j, x;
    for(i=0;i<n;i++){
        x=v[i+1];
        for(j=i; (v[j]>x) && (j>=0); j--)
            v[j+1]=v[j];
        v[j+1]=x;
    }
}
