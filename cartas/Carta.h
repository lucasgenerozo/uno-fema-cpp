#ifndef CARTA_H
#define CARTA_H

#include <string>

using namespace std;

class Carta
{
	protected:
		string nome;
		string acao;
	public:
		virtual void executarAcao() = 0;
		
};

#endif
