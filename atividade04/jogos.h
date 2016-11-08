typedef struct jogos{
char nome[30], tipo[15];
int ano, downloads;
float reating;
}Jogos;
typedef struct pilha{
  Jogos pilha[10];
  int topo;
}Pilha;

void * inicializa(Pilha *p);
void * insere(Pilha *p, Jogos games);
void * retira(Pilha *p);
void * imprime(Pilha *p); 

void * imprimir(Jogos *games);
void * ordenar_reating(Jogos *games[10], int i, int j);
void * cresc_busca(Jogos *games[10], char busca[15], int i, int j);
void * decresc_busca(Jogos *games[10], char busca[15], int i, int j);
void * ord_ano_ant(Jogos *games[10], int i, int j);
void * ord_ano_rec(Jogos *games[10], int i, int j);
void * busca_aval(Jogos *games[10],int busca, int i);
void * alfabetica(Jogos *games[10], int i, int j, int val);
