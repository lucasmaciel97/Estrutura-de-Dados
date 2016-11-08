#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

int main(){
	Fila f, *a=&f;
	int elem, i;

inicializa(a);

for(i=p->fim; i>p->inicio; i--){
	scanf("%d", &elem);
    	insere(a, elem);
}

retira(a);

imprimefim(a);

imprimeinicio(a);

impimipefila(a);

imprimecontrario(a);

retiratodos(a);

}
