#include <stdio.h>
#include <string.h>
#include "jogos.h"

int main(){

Jogos p[10], *g=&p[10];
Pilha b;
int i, j, escolha, ordem;
int aux, aux2, aux3;
char aux1[30], busca[15];
int av;

for(i=0;i<10;i++){
printf("digite o nome do jogo\n ");
fgets(g->nome,30,stdin);
printf("digite o estilo de jogo\n");
fgets(g->tipo,15,stdin);
printf("digite o ano de lancamento\n");
scanf("%d", &g->ano);
printf("digite o numero de downloads\n");
scanf("%d", &g->downloads);
printf("digite a nota do jogo\n");
scanf("%f", &g->reating);
getchar();
}
opcoes:
	printf("O que deseja?\n 1-ver todos os jogos\n 2-ver os jogos por ordem de avaliacao\n 3-ver os jogos por estilo\n 4-ver games por data de lancamento(antigo ate mais recentes)\n 5-ver games por data de lancamento(recentes ate mais antigos)\n 6-buscar games por avaliacao\n 7-ver por ordem alfabetica\n 8-sair\n");
	scanf("%d",&escolha);
	getchar();


if(escolha==1){
		for(i=0;i<10;i++){
		   imprimir(g[i]);
		   goto opcoes;
	        }
              }

	if(escolha==2){
		ord_reating(g);
		goto opcoes;
           
	  }

	if(escolha==3){
		printf("digite o estilo de jogo que deseja buscar\n");
		fgets(busca_est,15,stdin);
		menubusca:
		printf("como deseja ver a ordem dos games\n");
		printf("1-ordem crescente\n");
		printf("2-ordem decrescente\n");
		printf("3-voltar ao menu principal\n");
		printf("\n");
		scanf("%d",&ordem);
		if(ordem==1){
			cresc_busca(g,busca_est);
			goto menubusca;
		}
		if(ordem==2){
			decresc_busca(g,busca_est);
			goto menubusca;
		}
		if(ordem==3){
			goto opcoes;
		}
		else{
			printf("opcao invalida\n");
			goto opcoes;
		}		
	}
	
	if(escolha==4){
		ord_ano_ant(games);
		goto opcoes;
	}
	
	if(escol==5){
		ord_ano_rec(games);
		goto opcoes;
	}
	
	if(escolha==6){
		printf("digite a nota que deseja busca\n");
		scanf("%d",&av);
		busca_aval(g,av);
		goto opcoes;
	}
	
	if(escolha==7){
		alfabetica(g);
		goto opcoes;
	}

	
	if(escolha==8){
		printf("operacao concluida\n");

       }
