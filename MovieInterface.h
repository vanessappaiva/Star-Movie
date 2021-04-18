#include "Movie.h"
#include "MainInterface.h"
#include <iostream>
#include <cctype>
#include "DataBase.h"

using namespace std;

class MovieInterface
{
	private:
		MainInterface mi;
		DataBase db;
		
	
	public:
		//fun��es que pedem o NOME, NOTA, ANO, DIRETOR e CATEGORIA
		string ask_name();
		float ask_rate();
		int ask_year();
		string ask_director();
		string ask_categorie();
	
		//fun��o que mostra os filmes	
		void show_movie(string n, float r, int y, string d, string c);

};

