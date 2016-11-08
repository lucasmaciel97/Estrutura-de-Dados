#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main(){
	Pilha *a;
    int i, j;
    char num[]="0123456789";
    char exprecao[10], op[]="+-*/";

  printf("Digite uma exprecao infixa");
  scanf("%s", &exprecao);

    inicializa(a);
    
       for(i=-1;i<=strlen(exprecao);i++){
          for(j=-1; j<=strlen(op)){
          if(exprecao[i]==op[e]){
                push(a, exprecao[i]);
			}
            if(exprecao[i]=='('){ 
              }
              if(exprecao[i]==num[j]){
                 printf("%c", exprecao[i]);
                }
                if(exprecao[i]==')'){
                   imprime(a);
                   pop(a);
                 }
}
      return 0;
}
