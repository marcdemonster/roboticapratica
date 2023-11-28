typedef int TipoItem;
const int max_itens = 100;

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha();//construtora da pilha//
    ~pilha();//destrutora da pilha//
    bool estacheia();//verifica se a pilha esta cheia//
    bool estavazia();//verifica se a pilha esta vazia//
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();//print
    int qualtamanho();//lenght
};