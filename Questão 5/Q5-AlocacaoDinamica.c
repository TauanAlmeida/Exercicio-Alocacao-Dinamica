#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Q5-AlocacaoDinamica.h"


int main(){
	Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));
	imprime(cadastro(p));
	free(p);
}

void imprime(Pessoa *q){
	printf ("Cadastro!\n");
	printf ("Nome: %s\n",q->nome);
	printf ("CPF: %s\n",q->cpf);
	printf ("Data: %s\n",q->data);
}


Pessoa* cadastro(Pessoa *p){
	char nome[10]; char cpf[10]; char data[10];
	p = (Pessoa*) malloc(sizeof(Pessoa));
	printf ("Nome: ");
	scanf ("%s", &nome);
	
	printf ("CPF: ");
	scanf ("%s", &cpf);
	
	printf ("Data de Nascimento: ");
	scanf ("%s", &data);
	
	if (p != NULL){
		strcpy (p->nome,nome);
		strcpy (p->cpf,cpf);
		strcpy (p->data,data);
	}

	return p;
}
