#include <stdio.h>
#include <string.h>
#include "arquivo.h"

int main (){
	Bola b, *l=&b;
	criarbola (l, 499.90, 'm', 'p', 'c', 'n', 'f', 'v');

precobola (l, 499.90);
imprime(l);

tamanhobola (l, 'm');
imprime(l);

corbola (l, 'p');
imprime(l);

tipobola (l, 'c');
imprime(l);

marcabola (l, 'n');
imprime(l);

modalidadebola (l, 'f');
imprime(l);

estadobola (l, 'v');
imprime(l);

l=exclui(l);

}
