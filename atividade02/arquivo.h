typedef struct bola{
	float preco;
	char tipo, cor, marca, modalidade, estado, tamanho;
}Bola;

void criarbola (Bola *b, float preco, char tamanho, char cor, char tipo, char marca, char modalidade, char estado);
void precobola (Bola *b, float preco);
void tamanhobola (Bola *b, char tamanho);
void corbola (Bola *b, char cor);
void tipobola (Bola *b, char tipo);
void marcabola (Bola *b, char marca);
void modalidadebola (Bola *b, char modalidade);
void estadobola (Bola *b, char estado);
void imprime(bola *b);

Bola * exclui(Bola *a);
