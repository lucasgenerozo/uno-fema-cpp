#include "CartaNormal.h"
#include <stdlib.h>

void CartaNormal::executarAcao() {
	std::cout << "\nCart�o: " << this->nome << " - A��o: " << this->acao;
}

CartaNormal::CartaNormal(string nome, string acao) : nome(nome), acao(acao) {}
