#include <stdio.h>
#include <string.h>
#include "arquivo.h"

void criarbola (Bola *b, float preco, char tamanho, char cor;, char tipo, char marca, char modalidade, char estado){
	b->preco=preco;
	b->tamanho=tamanho;
	b->cor=cor;
	b->tipo=tipo;
	b->marca=marca;
	b->modalidade=modalidade;
	b->estado=estado;
}

void precobola (Bola *b, float preco){
	printf ("%f",b->preco);
}

void tamanhobola (Bola *b, char tamanho){
	if(b==NULL){
		printf(" tamanho não existe\n");
		return b;
}
	printf ("%c",b->tamanho);
}

void corbola (Bola *b, char cor){
	if(b==NULL){
		printf(" cor não existe\n");
		return b;
}
	printf ("%c", b->cor);
}

void tipobola (Bola *b, char tipo){
	if(b==NULL){
		printf(" tipo não existe\n");
		return b;
}
	printf ("%c", b->tipo);
}

void marcabola (Bola *b, char marca){
	if(b==NULL){
		printf(" marca não existe\n");
		return b;
}
	printf("%c", b->marca);
}

void modalidadebola (Bola *b, char modalidade){
	if(b==NULL){
		printf(" modalidade não existe\n");
		return b;
}
	printf("%c", b->modalidade);
}

void estadobola (Bola *b, char estado){
	printf("%c", b->estado);
}

void imprime(Bola *b){
 	printf("Marca: %c\n", b->marca);
  	printf("Tipo: %c\n", b->tipo);
 	printf("Cor: %c \n", b->cor);
  	printf("Preço: %f \n", b->preco);
 	printf("Estado: %c \n", b->estado);
	printf("Modalidade: %c\n", b->modalidade);
	printf("Tamanho: %c\n", b->tamanho);
}

Bola *exclui(Bola *a){
	a= NULL;
return a;
}
