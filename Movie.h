#include <string>
#include <sstream>
#include <vector> 

#ifndef MOVIE_H
#define MOVIE_H

using namespace std;

class Movie
{
	private:
		//Filme tem como caracter�stica NOME, NOTA, ANO, DIRETOR e CATEGORIA
		string name;
		float rate;
		int year;
		string director;
		string categorie;
		
		//fun��o que transforma a NOTA e ANO em STRING para colocar no arquivo
		string year_to_string();
		string rate_to_string();
		
	public:
		//fu��es construtoras de Filme
		Movie(string, float, int, string, string);
		Movie();
		
		//getters and setters para os atributos de Filme
		string get_name();
		float get_rate();
		int get_year();
		string get_director();
		string get_categorie();
		
		void set_name(string);
		void set_rate(float);
		void set_year(int);
		void set_director(string);
		void set_categorie(string);
				
		//fun��o que transforma todas as STRING's em uma so para colocar no arquivo
		string to_string();
		

		
};
#endif
