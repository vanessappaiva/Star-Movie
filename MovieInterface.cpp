#include "MovieInterface.h"


string MovieInterface::ask_name()
{
	string name;
	cout<< "Type the name of the movie: \n";
	cin.ignore();
	getline(cin,name);
	return name;
}

float MovieInterface::ask_rate()
{
	float rate;
	cout<< "Type the rate that you give for the movie(from 0 to 5): \n";
	cin>> rate;
	return rate;
}

int MovieInterface::ask_year()
{
	int year;
	cout<< "Type the year of premiere: \n";
	cin>> year;
	return year;
	
}

string MovieInterface::ask_director()
{
	string director;
	cout<< "Type the director of the movie: \n";
	cin.ignore();
	getline(cin, director);
	return director;
}

string MovieInterface::ask_categorie()
{
	string categorie;
	cout << "The categories are: Action, Fantasy, Crime, Drama, Adventure." << endl; 
	cout<< "Type the categorie of the movie: \n";
	cin>> categorie;
	return categorie;
}
//função que mostra os filmes
void MovieInterface::show_movie(string n, float r, int y, string d, string c)
{
	cout << "Name: " << n << " Rate: " << r << " Year: " << y << " Director: " << d << " Categorie: " << c << endl;
}


