#include <stdio.h>
#include <string.h>
#include "jogos.h"

void * inicializa(Pilha *p){
	p->topo=-1;
}

void * insere(Pilha *p, Jogos games){

	p->topo;
	p->pilha[p->topo++]=games;
}

void * retira(Pilha *p){
	p->topo=-1;
}

void * imprime(Pilha *p){
	printf("Topo da pilha: %i\n",p->topo);
	printf("NOME: %s\n",p->pilha[p->topo].nome);
	printf("ESTILO: %s\n",p->pilha[p->topo].tipo);
	printf("ANO DE LANCAMENTO: %d\n",p->pilha[p->topo].ano);
	printf("DOWNLOADS: %d\n",p->pilha[p->topo].downloads);
	printf("REATING: %f\n",p->pilha[p->topo].reating);
	printf("\n");
}
void * imprimir(Jogos *games){
	Pilha *p;

        printf("GAME\n");
	printf("NOME: %s\n",games->nome);
	printf("ESTILO: %s\n",games->tipo);
	printf("ANO DE LANCAMENTO: %d\n",games->ano);
	printf("DOWNLOADS: %d\n",games->downloads);
	printf("REATING: %f\n",games->reating);
	printf("\n");
        insere(p, games[p->topo]);
}

void * ordenar_reating(Jogos *games[10], int i, int j){
	    Jogos *aux1;

             for(i=0;i<10;i++){
		games[i]=games[j];
	}
	
		for( i=0; i<10; i++ ){
                	for( j=0; j<10; j++ ){
                      		if( games[i]->reating < games[j]->reating ){
                        		aux1=games[i];
                      		  	games[i]=games[j];
                       			games[j]=aux1;
				}
                  	}
			
		}
	for(i=0;i<10;i++){
		imprimir(games[i]);
	}
}

void * cresc_busca(Jogos *games[10], char busca[15], int i, int j){
	    Jogos *aux1;

             for(i=0;i<10;i++){
		games[i]=games[j];
	}
	char buscando[15];
	
	strcpy(buscando,busca);
	for( i=0; i<10; i++ ){
                	for( j=0; j<10; j++ ){
                      		if( games[i]->reating < games[j]->reating ){
                        		aux1=games[i];
                      		  	games[i]=games[j];
                       			games[j]=aux1;
				}
                  	}
			
		}

	
	for(i=0;i<10;i++){
			if(strcmp(games[i]->tipo,buscando)==0){
				imprimir(games[i]);
			}
		}
}

void * decresc_busca(Jogos *games[10], char busca[15], int i, int j){
	     Jogos *aux1;

             for(i=0;i<10;i++){
		games[i]=games[j];
	}
	char buscando[15];
	
	strcpy(buscando,busca);
	for( i=0; i<10; i++ ){
                	for( j=0; j<10; j++ ){
                      		if( games[i]->reating > games[j]->reating ){
                        		aux1=games[i];
                      		  	games[i]=games[j];
                       			games[j]=aux1;
							}
                  	}
			
		}

	
	for(i=0;i<10;i++){
			if(strcmp(games[i]->tipo,buscando)==0){
				imprimir(games[i]);
			}
	}
}

void * ord_ano_ant(Jogos *games[10], int i, int j){
	     Jogos *aux1;

             for(i=0;i<10;i++){
		games[i]=games[j];
	}
	
		for( i=0; i<10; i++ ){
                	for( j=0; j<10; j++ ){
                      		if( games[i]->ano < games[j]->ano ){
                        		aux1=games[i];
                      		games[i]=games[j];
                       		games[j]=aux1;
							}
                  	}
			
		}
	for(i=0;i<10;i++){
		imprimir(games[i]);
	}
}

void * ord_ano_rec(Jogos *games[10], int i, int j){
	     Jogos *aux1;

             for(i=0;i<10;i++){
		games[i]=games[j];
	}
	
		for( i=0; i<10; i++ ){
                	for( j=0; j<10; j++ ){
                      		if( games[i]->ano > games[j]->ano ){
                        		aux1=games[i];
                      		games[i]=games[j];
                       		games[j]=aux1;
							}
                  	}
			
		}
	for(i=0;i<10;i++){
		imprimir(games[i]);
	}
}

void * busca_aval(Jogos *games[10],int busca, int i){
	for(i=0;i<10;i++){
			if(games[i]->reating==busca){
				imprimir(games[i]);
			}
	}
}
	
void * alfabetica(Jogos *games[10], int i, int j, int val){
	     Jogos *aux;

             for(i=0;i<10;i++){
		games[i]=games[j];
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			val=strcoll(games[i]->nome,games[j]->nome);
			if(val==-1){
				aux=games[i];
				games[i]=games[j];
				games[j]=aux;
			}
		}
	}
	for(i=0;i<10;i++){
		imprimir(games[i]);
	}
	
}



