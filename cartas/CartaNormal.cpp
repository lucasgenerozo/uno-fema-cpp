#include "CartaNormal.h"
#include <stdlib.h>

void CartaNormal::executarAcao() {
	std::cout << "\nCartão: " << this->nome << " - Ação: " << this->acao;
}

CartaNormal::CartaNormal(string nome, string acao) : nome(nome), acao(acao) {}
