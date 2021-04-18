#include "ControlMovie.h"
//função que registra o filme
Movie ControlMovie::register_movie()
{	
	Movie m (this->vi.ask_name(),
			this->vi.ask_rate(),
			this->vi.ask_year(),
			this->vi.ask_director(),
			this->vi.ask_categorie());
	fm.write("Star_Movie_Register.txt", m.to_string());
	return m;		
	
}

//função que busca o filme pela categoria
void ControlMovie::search_by_categorie(vector<Movie> movie)
{
	
	 string categorie = vi.ask_categorie();
	
		for(int i = 0; i < movie.size();i++ )			
		{
				if(movie.at(i).get_categorie() == categorie)
					vi.show_movie(movie.at(i).get_name(), 
						movie.at(i).get_rate(), 
						movie.at(i).get_year(), 
						movie.at(i).get_director(), 
						movie.at(i).get_categorie());
		
		}

	
}

//função que busca o filme pela nota
void ControlMovie::search_by_rate(vector<Movie> movie)
{
	float rate;
	if ( rate = vi.ask_rate())
	{
	
	
	for(int i = 0; i < movie.size();i++ )			
	{
			if(movie.at(i).get_rate() == rate)
				vi.show_movie(movie.at(i).get_name(), 
					movie.at(i).get_rate(), 
					movie.at(i).get_year(), 
					movie.at(i).get_director(), 
					movie.at(i).get_categorie());
		
	}
	
}
//else 
//cout << "Wrong option!" << endl;
}

//função que busca o filme pela data
void ControlMovie::search_by_year(vector<Movie> movie)
{
	int year;
	if ( int year = vi.ask_year())
	//{
		
		for(int i = 0; i < movie.size();i++ )			
		{
				if(movie.at(i).get_year() == year)
					vi.show_movie(movie.at(i).get_name(), 
						movie.at(i).get_rate(), 
						movie.at(i).get_year(), 
						movie.at(i).get_director(), 
						movie.at(i).get_categorie());
		
		}}

	// if (this-> db.get_year())
	// cout << "Wrong option!" << endl;
//}


	


//void ControlMovie::show_invalid_option_massage()
//{
//	cout>> "Try again!"
//}

//ofstream registrar
//ifstream ler
//fm.write("Star_Movie_Register.txt", m.to_string());

void ControlMovie::intxt()
{
	ifstream file;
	file.open("Star_Movie_Register.txt", ifstream::app);
	string output;
	if(file.is_open())
		{
			while (getline (file, output))
			{
				cout << output << endl;
			}
		}
		file.close();
}

