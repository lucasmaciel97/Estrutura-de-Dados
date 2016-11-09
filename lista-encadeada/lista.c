#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista *crialista(Lista *l){
	return NULL;
}

Lista *insere(Lista *l, int x){
	Lista *novono = (Lista *) malloc(sizeof(Lista));
novono->dado = x;
novono->prox = l;
return novono;
}

Lista *buscar(Lista *l, int valor){
	if (l == NULL){
		return NULL;
	}
	if (l->dado == x){
		return l;
	}
return buscar(x, l->prox);
}

void *remove(Lista *l){
	Lista *aux1;
	aux1 = l->prox;
	l->prox = aux1->prox;
free(aux1);
}

void *buscarremove(Lista *l, int y){
	Lista *aux, *aux1;
	aux = l;
	aux1 = l->prox;
	while (aux1 != NULL && aux1->dado != y){
		aux = aux1;
		aux1 = aux1->prox;
	}
if(aux1 != NULL){
	aux->prox = aux1->prox;
	free (aux1);
}
}

void *imprime(Lista *l){
	Lista *aux;
for(aux=l; aux!=NULL; aux=aux->prox){
	printf("%d", aux->dado);
}
}

