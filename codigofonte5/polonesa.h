#define TAM10

struct pilha {
char pilha [TAMANHO]; 
int topo;
};
typedef struct pilha Pilha;
void * inicializa(Pilha *p);
void * push(Pilha *p, char elem);
void * pop(Pilha *p);
void * imprime(Pilha *p);
