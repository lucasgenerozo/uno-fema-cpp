#include "CartaAcao.h"
#include <iostream>
#include <stdlib.h>

void CartaAcao::executarAcao() {
	cout << "\nCarta: " << this->nome << " - Ação: " << this->acao;
}

CartaAcao::CartaAcao() {
	int numero = rand() % 4;
	
	string numero_str[5] = { "+2", "+4", "[X]", "->", "<-" };
	string acao_str[5] = { "Comprar mais duas cartas", "Comprar mais quatro cartas", "Bloquear", "Mudar ordem de jogo", "Mudar ordem de jogo" };
	
	this->nome = numero_str[numero];
	this->acao = acao_str[numero];
}
