#include <stdlib.h>
#include <stdio.h>

void check_vetor(int *vetor, int i){
	int j;
	printf("Prencha o Vetor\n");
	for(j=0;j<i;j++){
		printf("Vetor[%d]: ", j);
		scanf("%d", &vetor[j]);
	}
}

int main (){
int n, *vet, j;
printf ("Digite um valor: ");
scanf ("%d", &n);
vet = (int*) malloc(n*sizeof(int));
	if(vet==NULL){
		printf("Falha na alocacao de memoria.");
		exit(1);
	}
	check_vetor(vet,n);
 
 	printf ("\n\nVetor Prenchido!\n");
	 for(j=0;j<n;j++){
		printf("Vetor[%d] = %d\n",j, vet[j]);
	}
   free(vet);
   return 0;
}

