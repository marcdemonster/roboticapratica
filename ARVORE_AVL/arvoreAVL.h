#include <iostream>
#include "aluno.h"

struct No{
    Aluno aluno;
    No* filhoesquerda;
    No* filhodireita;

    int fatorB; //acrescentada
};

class ArvoreAVL{//novo nome da classe
private:
No* raiz;

public:
ArvoreAVL();//mudou o nome
~ArvoreAVL();//mudou o nome
void deletarArvore(No* Noatual);
No* obterRaiz();
bool estavazio();
bool estacheio();
void inserir(Aluno aluno);//modificada
void remover(Aluno aluno);//modificada
void removerbusca(Aluno aluno, No*& noatual, bool& diminuiu); // modicicada
void deletarNo(No*& noatual, bool& diminuiu);//modificada
void obterSucessor(Aluno& AlunoSucessor, No* temp);
void buscar(Aluno& aluno, bool& busca);
void imprimirpreordem(No* Noatual);
void imprimiremordem(No* Noatual);
void imprimirposordem(No* Noatual);
 // novos métodos:

 void rotacaodireita(No*& tree);
 void rotacaoequerda(No*& tree);
 void rotacaoesquerdadireita(No*& tree);
 void rotacaodireitaesquerda(No*& tree);
 void realizarotacao(No*& tree);
 void insererecursivo(No*& noatual, Aluno aluno, bool& cresceu);

};