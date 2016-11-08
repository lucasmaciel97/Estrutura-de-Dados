#define TAMANHO 10

struct fila{
   int fila [TAMANHO];
   int inicio, fim;
};
typedef struct fila Fila;

void inicializa(Fila *f);
void insere(Fila *f, int elem);
void retira(Fila *f);
void imprimefim(Fila *f);
void imprimeinicio(Fila *f);
void imprimefila(Fila *f);
void imprimecontrario(Fila *f);
void retiratodos(Fila *f);
