#ifndef CARTANORMAL_H
#define CARTANORMAL_H

#include <cstring>
#include "Carta.h"

class CartaNormal : public Carta {
	public:
		void executarAcao() override;
		
		CartaNormal();
};

#endif
