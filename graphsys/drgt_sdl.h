/*
	Dagoni RPG Game Tools
	Dagoni Inform�tica e Telecomunica��es.(R)
	2007
	
	Edward Facundo.
*/
#include <SDL.h>
#include <iostream>

class DRGT_SDL
{
	public:
	// Constructor.
	DRGT_SDL(logger log){
		log.logmsg("SDL Est�nciada com sucessso...");
	}	
	SDL_Surface *d_janela(int largura, int altura, int bpp, char imagem_background);	
	bool refresh_janela(SDL_Surface *tela);
	
};
