#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializa(Pilha *p){
	p->topo=-1;
}

void insere(Pilha *p, int elem){
int i;	
	for(i=0;i<10;i++){
	p->Pilha[p->topo++];
	p->Pilha=elem;
	}
}

void retira(Pilha *p){
	p->topo--;
}

void imprimetopo(Pilha *p){
	printf("Topo da pilha: %i\n",p->topo);
}
