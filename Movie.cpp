#include "Movie.h"

//fuções construtoras de Filme
Movie::Movie(string name, float rate, int year, string director, string categorie)
{  	
	this->name = name;
	this->rate = rate;
	this->year = year;
	this->director = director;
	this->categorie = categorie;
}

Movie::Movie()
{
}

//getters and setters para os atributos de Filme
string Movie::get_name()
{
	return this->name;	 
}

float Movie::get_rate()
{
	return this->rate;	 
}

int Movie::get_year()
{
	return this->year;
}

string Movie::get_director()
{
	return this->director;
}

string Movie::get_categorie()
{
	return this->categorie;
}

void Movie::set_name(string n)
{
	this->name = name;
}

void Movie::set_rate(float r)
{
	this->rate = rate;
}

void Movie::set_year(int y)
{
	this->year = year;
}

void Movie::set_director(string d)
{
	this->director = director;
}

void Movie::set_categorie(string c)
{
	this->categorie = categorie;
}

//função que transforma a NOTA de FLOAT para STRING
string Movie::rate_to_string()
{	
	stringstream ss;
	ss << this->rate;
	return ss.str();
}

//função que transforma a YEAR de FLOAT para STRING
string Movie::year_to_string()
{
	stringstream ss;
	ss << this->year;
	return ss.str();
}

//função que junta tudo em STRING para colocar no arquivo
string Movie::to_string()
{
	return this->name + ", " 
	+ this->rate_to_string() + ", " 
	+ this->year_to_string() + ", " 
	+ this->director + ", " 
	+ this->categorie;	
}

