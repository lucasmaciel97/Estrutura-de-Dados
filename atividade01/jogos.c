#include <stdio.h>
#include <string.h>
#include "jogos.h"

void imprimir(Jogos *games){
	printf("GAME\n");
	printf("NOME: %s\n",games->nome);
	printf("ESTILO: %s\n",games->tipo);
	printf("ANO DE LANCAMENTO: %d\n",games->ano);
	printf("DOWNLOADS: %d\n",games->downloads);
	printf("REATING: %d\n",games->reating);
	printf("\n");
}

void ordenar_reating(Jogos *games[n], int n, int i, int j, int aux1){
	for(i=0;i<cont;i++){
		games[i]=games[j];
	}
	
		for( i=0; i<cont; i++ ){
                	for( j=0; j<cont; j++ ){
                      		if( games[i]->reating < games[j]->reating ){
                        		aux1=games[i];
                      		  	games[i]=games[j];
                       			games[j]=aux1;
				}
                  	}
			
		}
	for(i=0;i<cont;i++){
		imprimir(games[i]);
	}
}

void cresc_busca(Jogos *games[n], int aux1, char busca[15],int n, int i, int j){
	for(i=0;i<cont;i++){
		games[i]=games[j];
	}
	char buscando[15];
	
	strcpy(buscando,busca);
	for( i=0; i<cont; i++ ){
                	for( j=0; j<cont; j++ ){
                      		if( games[i]->reating < games[j]->reating ){
                        		aux1=games[i];
                      		  	games[i]=games[j];
                       			games[j]=aux1;
				}
                  	}
			
		}

	
	for(i=0;i<cont;i++){
			if(strcmp(games[i]->tipo,buscando)==0){
				imprimir(games[i]);
			}
		}
}

void decresc_busca(Jogos *games[n], int aux1, char busca[15],int n, int i, int j){
	for(i=0;i<cont;i++){
		games[i]=games[j];
	}
	char buscando[15];
	
	strcpy(buscando,busca);
	for( i=0; i<cont; i++ ){
                	for( j=0; j<cont; j++ ){
                      		if( games[i]->reating > games[j]->reating ){
                        		aux1=games[i];
                      		  	games[i]=games[j];
                       			games[j]=aux1;
							}
                  	}
			
		}

	
	for(i=0;i<cont;i++){
			if(strcmp(games[i]->tipo,buscando)==0){
				imprimir(games[i]);
			}
	}
}

void ord_ano_ant(Jogos *games[n], int aux1, int n, int i, int j){
	for(i=0;i<cont;i++){
		games[i]=games[j];
	}
	
		for( i=0; i<cont; i++ ){
                	for( j=0; j<cont; j++ ){
                      		if( games[i]->ano < games[j]->ano ){
                        		aux1=games[i];
                      		games[i]=games[j];
                       		games[j]=aux1;
							}
                  	}
			
		}
	for(i=0;i<cont;i++){
		imprimir(games[i]);
	}
}

void ord_ano_rec(Jogos *games[n], int aux1, int n, int i, int j){
	for(i=0;i<cont;i++){
		games[i]=games[j];
	}
	
		for( i=0; i<cont; i++ ){
                	for( j=0; j<cont; j++ ){
                      		if( games[i]->ano > games[j]->ano ){
                        		aux1=games[i];
                      		games[i]=games[j];
                       		games[j]=aux1;
							}
                  	}
			
		}
	for(i=0;i<cont;i++){
		imprimir(games[i]);
	}
}

void busca_aval(Jogos *games[n],int busca, int n, int i){
	for(i=0;i<cont;i++){
			if(games[i]->reating==busca){
				imprimir(games[i]);
			}
	}
}
	
void alfabetica(Jogos *games[n],int n, int aux, int i, int j, int val){
	for(i=0;i<cont;i++){
		games[i]=games[j];
	}
	for(i=0;i<cont;i++){
		for(j=0;j<cont;j++){
			val=strcoll(games[i]->nome,games[j]->nome);
			if(val==-1){
				aux=games[i];
				games[i]=games[j];
				games[j]=aux;
			}
		}
	}
	for(i=0;i<cont;i++){
		imprimir(games[i]);
	}
	
}
