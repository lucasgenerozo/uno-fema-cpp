#ifndef CARTAACAO_H
#define CARTAACAO_H

#include <cstring>
#include "Carta.h"

class CartaAcao : public Carta {
	public:
		void executarAcao() override;
		
		CartaAcao();
};

#endif
