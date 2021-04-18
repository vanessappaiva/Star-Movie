#include "ControlManager.h"

ControlManager::ControlManager()
{
		start();
} 

void ControlManager::start()
{ 
	int user_option = this->mi.show_main_menu();
	while(user_option != 0) 
	{
					//função que mostra o menu principal
		
			switch(user_option)
			{
					//caso 1 registrar o filme
					case 1:
						this->db.add_movie(this->cv.register_movie());
						this->mi.clean_screen();
						break;
					
					//caso 2 mostrar todos os filmes
					case 2:
						this->show_all_movies(db.get_movie());
						this->mi.clean_screen();
						break;
					
					//caso 3 procurar filmes pela categoria	
					case 3:	
						this->cv.search_by_categorie(db.get_movie());   
						this -> mi.clean_screen();
						break;

					//caso 4 procurar filmes pela nota	
					case 4:	
						this->cv.search_by_rate(db.get_movie());   
						this -> mi.clean_screen();
						break;
					
					//caso 5 procurar filmes pela data	
					case 5:	
						this->cv.search_by_year(db.get_movie());   
						this -> mi.clean_screen();
						break;
					
					//caso 0 é a saída do programa		
					case 0:
						cout << "Exiting..." << endl;
						system ("pause");
						exit (0);
						break;
					
					//mensagem de problema
					default:
						cout << "Wrong option! Try again" << endl;		
			}
			user_option = this->mi.show_main_menu();
	} 
	
};
void ControlManager::show_all_movies(vector<Movie> m)
{
	string name; 
	float rate = 0;
	int year = 0;
	string director;
	string categorie;

	for(int i = 0; i < m.size(); i++)
	{	
		name = m.at(i).get_name();
		rate =m.at(i).get_rate();
		year = m.at(i).get_year();
		director = m.at(i).get_director();
		categorie = m.at(i).get_categorie();
					

		this->mi.show_movie(name, rate, year, director, categorie);	
	}
}



