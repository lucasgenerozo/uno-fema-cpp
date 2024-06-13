#include "Baralho.h"
#include <iostream>
#include <stdlib.h>

void Baralho::gerarCartasNormais(int qtd) {
	for (int i = 0; i < qtd; i++) this->cartas.push_back(new CartaNormal());
}

void Baralho::gerarCartasAcao(int qtd) {
	for (int i = 0; i < qtd; i++) this->cartas.push_back(new CartaAcao());
}

void Baralho::gerarCartasCuringas(int qtd) {
	for (int i = 0; i < qtd; i++) this->cartas.push_back(new CartaCuringa());
}

void Baralho::puxarCarta() {
	if (this->cartas.empty()) {
		cout << "\nBaralho vazio.";
		return;
	}
	
	int pos = rand() % this->cartas.size();
	
	this->cartas[pos]->executarAcao();
}

Baralho::Baralho(int qtd_normal, int qtd_acao, int qtd_curinga, int qtd_jogadores, int qtd_cartas_por_jogador) {
	this->gerarCartasNormais(qtd_normal);
	this->gerarCartasAcao(qtd_acao);
	this->gerarCartasCuringas(qtd_curinga);
	
	/*for (int i = 0; i < this->cartas.size(); i++) {
		cout << "\n" << i+1 << " ";
		this->cartas[i]->executarAcao();
	}*/
}
