typedef struct jogos{
char nome[30], tipo[15];
int ano, downloads;
float reating;
}Jogos;

void imprimir(Jogos *games)
void ordenar_reating(Jogos *games[n], int n, int i, int j, int aux1);
void cresc_busca(Jogos *games[n], int aux1, char busca[15],int n, int i, int j);
void decresc_busca(Jogos *games[n], int aux1, char busca[15],int n, int i, int j);
void ord_ano_ant(Jogos *games[n], int aux1, int n, int i, int j);
void busca_aval(Jogos *games[n],int busca, int n, int i);
void alfabetica(Jogos *games[n],int n, int aux, int i, int j, int val);
