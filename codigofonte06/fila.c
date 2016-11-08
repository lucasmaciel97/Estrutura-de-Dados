#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

void inicializa(Fila *f){
		f->inicio = 0;
		f->fim = -1;
}
void insere(Fila *f, int elem){
	if(fim == TAMANHO-1){
		printf("A fila esta cheia!!");
	}
	  else{
		f->fim = f->fim+1;
		f->fila[f->fim] = elem;
	  }
}
void retira(Fila *f){
	if(fim < inicio){
		printf("A fila esta vazia!!");
	}
	  else{
		f->inicio++
	  }
}
void imprimefim(Fila *f){
	if(fim < inicio){
		printf("A fila esta vazia!!");
	}
	  else{
		printf("Fim: %d", f->fim);
	  }
}
void imprimeinicio(Fila *f){
	if(fim < inicio){
		printf("A fila esta vazia!!");
	}
	  else{
		printf(("Inicio: %d", f->inicio);
	  }
}
void imprimefila(Fila *f){
   int i;

   for(i=p->inicio; i<p->fim; i++){		
	if(fim < inicio){
		printf("A fila esta vazia!!");
	}
	  else{
	       printf("A fila: %d\n", f->fila[f->inicio]);
	  }
   }
}
void imprimecontrario(Fila *f){
   int i;

   for(i=p->inicio; i<p->fim; i++){
       if(fim < inicio){
            printf("A fila esta vazia!!");
       }
         else{
	       printf("Fim: %d", f->fim);
         }
   }
}
void retiratodos(Fila *f){
   int i;

   for(i=p->inicio; i<p->fim; i++){
      if(fim < inicio){
		printf("A fila esta vazia!!");
      }
        else{
		f->inicio++;
        }
   }
}
