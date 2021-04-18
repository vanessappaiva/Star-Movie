#include <vector>
#include "Movie.h"

#ifndef DATABASE_H
#define DATABASE_H

using namespace std;

class DataBase
{
	private:
		
		//a Base de Dados tem como característica um VETOR de Filme, um VETOR de Categoria, um VETOR DE Nota e um VETOR de Ano
		
		vector<Movie> movie;
		vector<string> categorie;
		vector<float> rate;
		vector<int> year;
		
		
	public:	
		//função construtora da Base de Dados
		DataBase();
		
		//função que adiciona filme ao VETOR
		void add_movie(Movie);
		void add_movie();
		
		vector<Movie> get_movie();
		
		//função que adiciona categoria ao VETOR		
		void add_categorie(string);
		void add_categorie();
				
		vector<string> get_categorie();
		
		//função que adiciona rate ao VETOR
		void add_rate(float);
		void add_rate();
				
		vector<float> get_rate();
		
		//função que adiciona ano ao VETOR
		void add_year(int);
		void add_year();
				
		vector<int> get_year();
		
		
};
#endif
