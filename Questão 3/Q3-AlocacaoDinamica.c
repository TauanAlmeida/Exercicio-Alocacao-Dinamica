#include <stdlib.h>
#include <stdio.h>

int *CriarMatriz(int n){
	int *p = (int*) malloc(n*sizeof(int));
	if(p==NULL){
	   printf("Falha na alocacao de memoria.");
	   exit(1);
	}
	printf("Matriz Alocada!\n"); 
	return p;
}

void lermatriz(int *matriz, int m, int n){
	int i, j, k=0;
	if(matriz==NULL){
	   printf("Falha na alocacao de memoria.");
	   exit(1);
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
		printf ("[%d]\t", matriz[k++]);
		}
	printf ("\n");
	}
}


void LimparMemoria(int *p){
	free(p);
}

int main (){
	int size, *matriz, m, n, i;
	printf ("Quantidade de linha da matriz?: ");
	scanf ("%d", &m);
	printf ("Quantidade de coluna da matriz?: ");
	scanf ("%d", &n);
	size= m*n;
	matriz = CriarMatriz(size);
	for (i=0;i<size;i++){
		scanf("%d", &matriz[i]);
	}
	lermatriz(matriz, m, n);
	LimparMemoria(matriz);
    return 0;
}

