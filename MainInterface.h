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
	
		//fun��o que mostra o menu principal
		int show_main_menu(); 
		
		//fun��o que limpa a tela
		void clean_screen();
		
		//fun��o que mostra os filmes
		void show_movie(string, float, int, string, string);
		
		//fun��o de erro
		void show_error();

};
#endif


