#include "MainInterface.h"
#include "FileManager.h"
#include "ControlMovie.h"
#include "DataBase.h"
#include <iostream>
#include <string>

using namespace std;

class ControlManager
{
	private:
		ControlMovie cv;
		MainInterface mi;
		DataBase db;
		//salvar em txt
		FileManager fm;
		
				
		
	public:
		//construtora de ControlManager
		ControlManager();
		//fun��o que come�a o programa
		void start();
		//fun��o que mostra todos os filmes
		void show_all_movies(vector<Movie>);
		
		
	
};
	
