#ifndef CARTACURINGA_H
#define CARTACURINGA_H

#include <cstring>
#include "Carta.h"

class CartaCuringa : public Carta {
	public:
		void executarAcao() override;
		
		CartaCuringa();
};

#endif
