#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void * inicializa(Pilha *p){
	p->topo=-1;
}

void * push(Pilha *p, char elem){
	
	p->pilha[p->topo++]=elem;

}

void * pop(Pilha *p){
	p->topo--;
}

void * imprime(Pilha *p){
	printf("Topo da pilha: %s\n",p->topo);
}
