#include <stdlib.h>
#include <stdio.h>

int **CriarMatriz(int **matriz, int m, int n){
	int i,j;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
		printf("Prencha a matriz: Matriz[%d][%d]: ", i,j);
		scanf("%d", &matriz[i][j]);
		}
	}
	return matriz;
}

void LimparMemoria(int **p, int m, int n){
	int i, j;
	for (j=0;j<n;j++){
		free(p[j]);
	}
	free(p);
}

int main (){
	int size, **matriz, m, n, i, j;
	printf ("Quantidade de linhas da matriz?: ");
	scanf ("%d", &m);
	printf ("Quantidade de colunas da matriz?: ");
	scanf ("%d", &n);
	matriz = (int**) malloc(m*sizeof(int*));
	for (i=0;i<n;i++){
		matriz[i] = (int*) malloc(n*sizeof(int));
	}
	if(matriz==NULL){
	   printf("Falha na alocacao de memoria.");
	   exit(1);
	}
	matriz = CriarMatriz(matriz, m, n);

	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
		printf("%d\t ", matriz[i][j]);
		}
		printf ("\n");
	}
	LimparMemoria(matriz, m, n);
    return 0;
}

