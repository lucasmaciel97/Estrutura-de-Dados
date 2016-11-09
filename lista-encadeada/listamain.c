#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
	Lista *l;

l = crialista();
l = insere(l, 30);
l = insere(l, 20);
l = insere(l, 10);

imprime(l);

buscarremover(l, 20);
buscarremover(l, 10);

imprime(l);

l = insere(l, 40);
l = insere(l, 60);

imprime(l);
}

