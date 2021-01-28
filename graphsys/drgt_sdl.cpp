/*
	Dagoni RPG Game Tools
	2007
	
	Edward Facundo.
*/

#include "drgt_sdl.h"

SDL_Surface *DRGT_SDL::d_janela(int largura, int altura, int bpp, char imagem_background)
{
	SDL_Surface *tela;
	tela = SDL_SetVideoMode( largura, altura, bpp, SDL_SWSURFACE | SDL_RESIZABLE );
	return(tela);
};

bool DRGT_SDL::refresh_janela(SDL_Surface *tela) 
{
	SDL_Flip( tela );
	return(true);
};
