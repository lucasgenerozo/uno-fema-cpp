#include "CartaCuringa.h"
#include <iostream>
#include <stdlib.h>

void CartaCuringa::executarAcao() {
	cout << "\nCarta: " << this->nome << " - Ação: " << this->acao;
}

CartaCuringa::CartaCuringa() {
	int numero = rand() % 3;
	
	string numero_str[4] = { "#", "$", "%", "@", };
	
	this->nome = numero_str[numero];
	this->acao = "Curinga";
}
