#include <iostream>
#include <string>
#include <conio.h>

#ifndef MAININTERFACE_H
#define MAININTERFACE_H
using namespace std; 

class MainInterface
{
	private:
 	
	public:
	
		//função que mostra o menu principal
		int show_main_menu(); 
		
		//função que limpa a tela
		void clean_screen();
		
		//função que mostra os filmes
		void show_movie(string, float, int, string, string);
		
		//função de erro
		void show_error();

};
#endif


