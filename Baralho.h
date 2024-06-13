#ifndef BARALHO_H
#define BARALHO_H

#include <vector>
#include "cartas/Carta.h"
#include "cartas/CartaNormal.h"
#include "cartas/CartaAcao.h"
#include "cartas/CartaCuringa.h"

class Baralho
{
	protected:
		vector<Carta*> cartas;
		
	public:
		void gerarCartasNormais(int qtd);
		void gerarCartasAcao(int qtd);
		void gerarCartasCuringas(int qtd);
		void puxarCarta();
		
		Baralho(int qtd_normal, int qtd_acao, int qtd_curinga, int qtd_jogadores, int qtd_cartas_por_jogador);
};

#endif
