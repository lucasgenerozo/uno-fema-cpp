#include <iostream>
#include <cstring>

#include "Baralho.h"

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int jogadores;
	int cartasPorJogador;
	int cartasNormal;
	int cartasAcao;
	int cartasCuringa;
	
	cout << "======= BEM VINDO AO UNOFEMA =======" << endl << endl;
	
	cout << "Digite a quantidade de cartas normais: ";
	cin >> cartasNormal;
	
	cout << "Digite a quantidade de cartas ação: ";
	cin >> cartasAcao;
	
	cout << "Digite a quantidade de cartas curinga: ";
	cin >> cartasCuringa;
	
	cout << "Digite a quantidade de jogadores: ";
	cin >> jogadores;
	
	cout << "Digite a quantidade de cartas por jogador: ";
	cin >> cartasPorJogador;
	
	cout << endl << "======= PUXANDO AS CARTAS =======" << endl << endl;
	
	Baralho baralhoUno(cartasNormal, cartasAcao, cartasCuringa, jogadores, cartasPorJogador);
		
	for (int i = 1; i <= jogadores; i++) {
		cout << "\tJogador " << i << endl;
		for (int j = 1; j <= cartasPorJogador; j++ ) {
			baralhoUno.puxarCarta();
		}
		cout << endl;
	}
	
	return 0;
}
