#include "MovieInterface.h"
#include "DataBase.h"
#include "FileManager.h"


using namespace std;

class ControlMovie
{
	private:
		MovieInterface vi;
		DataBase db;
		FileManager fm;

		
	public:
		//função que registra o filme
		Movie register_movie();
		
		//função que busca o filme pela categoria
		void search_by_categorie(vector<Movie>);
		
		//função que busca o filme pela nota
		void search_by_rate(vector<Movie>);
		
		//função que busca o filme pela data
		void search_by_year(vector<Movie>);
	
		void intxt();
};

