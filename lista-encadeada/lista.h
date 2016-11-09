struct lista{
	int dado;
	struct lista *prox;
};
typedef struct lista Lista;

Lista *crialista(Lista *l);
Lista *insere(Lista *l, int x);
Lista *buscar(Lista *l, int valor);
void *remove(Lista *l);
void *buscarremove(Lista *l, int y);
void *imprime(Lista *l);
