#include "CartaNormal.h"
#include <iostream>
#include <stdlib.h>

void CartaNormal::executarAcao() {
	cout << "\nCarta: " << this->nome << " - Ação: " << this->acao;
}

CartaNormal::CartaNormal() {
	int numero = rand() % 9;
	
	string numero_str[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	
	this->nome = numero_str[numero];
	this->acao = "Normal";
}
