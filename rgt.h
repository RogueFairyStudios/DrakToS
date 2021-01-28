/*
	Dagoni RPG Game Tools
	Dagoni Informática e Telecomunicações.(R)
	2007
	
	Edward Facundo.
*/
#include <iostream>
#include <string.h>
#define TITULO "Dagoni RPG Game Tools"
using namespace std;
class logger
{
	private:	
	int pid;
		
	public:
	bool saida;	
	logger(char *system)
	{
		if (system == "true")
		{
			this->saida = true;
		} else {
			this->saida = false;
		};
	}
	
	int logmsg(char *msg)
	{		
		cout << TITULO;
		cout << ": ";
		cout << msg;
		cout << "\n";
	};
};
