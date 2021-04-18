#include <vector>
#include "Movie.h"

#ifndef DATABASE_H
#define DATABASE_H

using namespace std;

class DataBase
{
	private:
		
		//a Base de Dados tem como caracter�stica um VETOR de Filme, um VETOR de Categoria, um VETOR DE Nota e um VETOR de Ano
		
		vector<Movie> movie;
		vector<string> categorie;
		vector<float> rate;
		vector<int> year;
		
		
	public:	
		//fun��o construtora da Base de Dados
		DataBase();
		
		//fun��o que adiciona filme ao VETOR
		void add_movie(Movie);
		void add_movie();
		
		vector<Movie> get_movie();
		
		//fun��o que adiciona categoria ao VETOR		
		void add_categorie(string);
		void add_categorie();
				
		vector<string> get_categorie();
		
		//fun��o que adiciona rate ao VETOR
		void add_rate(float);
		void add_rate();
				
		vector<float> get_rate();
		
		//fun��o que adiciona ano ao VETOR
		void add_year(int);
		void add_year();
				
		vector<int> get_year();
		
		
};
#endif
