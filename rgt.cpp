/*
	Dagoni RPG Game Tools
	Dagoni Inform�tica e Telecomunica��es.(R)
	2007
	
	Edward Facundo.
*/

// Defini��es.
#define VERSAO "0.1.a"
#include </usr/include/SDL/SDL.h>
#include <rgt.h>
//#include <audiosys/drgt_oa.cpp>
#include <graphsys/drgt_sdl.cpp>

int main()
{
	//DRGT_OA drgt_aengine;	 // Inicializa Engine de Audio(OpenAl)
	logger log("true");
	if (log.saida)
	{	
		cout << "########################[ RPG Game Tools ]\n";		
	};	
	
	log.logmsg("Iniciando...");	
	log.logmsg("Carregando Interface Gr�fica...");
	DRGT_SDL drgt_vegine(log);    // Inicializa Engine de Video(SDL)
		
}
