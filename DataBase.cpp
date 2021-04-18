#include "DataBase.h"


DataBase::DataBase()
{
	this->add_movie();
}

void DataBase::add_movie(Movie m)
{
	this->movie.push_back(m);
}

vector<Movie> DataBase::get_movie()
{
	return this->movie;
}

//filmes pré cadastrados no formato (NOME DO FILME, NOTA, ANO, DIRETOR e CATEGORIA)
void DataBase::add_movie()
{
	Movie m1  ("Star Wars Episodio I A Ameaca Fantasma       ", 4.7  , 1999 , "George Lucas        ", "Fantasy");
	Movie m2  ("Star Wars Episodio II Ataque dos Clones      ", 4.4  , 2002 , "George Lucas        ", "Fantasy");
	Movie m3  ("Star Wars Episodio III A Vinganca dos Sith   ", 4.6  , 2005 , "George Lucas        ", "Fantasy");
	Movie m4  ("Star Wars Episodio IV Uma Nova Esperança     ", 4.7  , 1977 , "George Lucas        ", "Fantasy");
	Movie m5  ("Star Wars Episodio V O Imperio Contra Ataca  ", 4.7  , 1980 , "George Lucas        ", "Fantasy");
	Movie m6  ("Star War Episodio VI O Retorno do Jedi       ", 4.7  , 1983 , "George Lucas        ", "Fantasy");
	Movie m7  ("Invasores Nenhum sistema esta a salvo        ", 4.8  , 2015 , "Baran bo Odar       ", "Action");
	Movie m8  ("Perdido em Marte                             ", 4.8  , 2015 , "Ridley Scott        ", "Fantasy");
	Movie m9  ("O Poderoso Chefao                            ", 4.6  , 1972 , "Francis Ford Coppola", "Crime");
	Movie m10 ("O Poderoso Chefao II                         ", 4.5  , 1975 , "Francis Ford Coppola", "Crime");
	Movie m11 ("Residente Evil O Hospede Maldito             ", 3.4  , 2002 , "Paul W. S. Anderson ", "Fantasy");
	Movie m12 ("Residente Evil 2 Apocalipse                  ", 3.1  , 2004 , "Alexander Witt      ", "Fantasy");
	Movie m13 ("Residente Evil 3 A Extincao                  ", 3.2  , 2007 , "Russell Mulcahy     ", "Fantasy");
	Movie m14 ("Residente Evil 4 Recomeco                    ", 2.9  , 2010 , "Paul W. S. Anderson ", "Fantasy");
	Movie m15 ("Residente Evil 5 Retribuicao                 ", 2.7  , 2012 , "Paul W. S. Anderson ", "Fantasy");
	Movie m16 ("Residente Evil 6                             ", 2.7  , 2016 , "Paul W. S. Anderson ", "Fantasy");
	Movie m17 ("Batman Cavaleiro das Trevas                  ", 4.5  , 2008 , "Christopher Nolan   ", "Action");
	Movie m18 ("Pulp Fiction Tempo de Violencia              ", 4.5  , 1994 , "Quentin Tarantino   ", "Crime");
	Movie m19 ("Clube da Luta                                ", 4.5  , 1999 , "David Fincher       ", "Drama");
	Movie m20 ("Forrest Gump O Contador de Historias         ", 4.4  , 1994 , "Robert Zemeckis     ", "Drama");
	Movie m21 ("Bastardos Inglorios                          ", 4.2  , 2009 , "Quentin Tarantino   ", "Adventure");
	Movie m22 ("O Silencio dos Inocentes                     ", 4.3  , 1991 , "Jonathan Demme      ", "Drama");
	
	//adicionando filmes no VETOR
	this->movie.push_back(m1);
	this->movie.push_back(m2);
	this->movie.push_back(m3);
	this->movie.push_back(m4);
	this->movie.push_back(m5);
	this->movie.push_back(m6);
	this->movie.push_back(m7);
	this->movie.push_back(m8);
	this->movie.push_back(m9);
	this->movie.push_back(m10);
	this->movie.push_back(m11);
	this->movie.push_back(m12);
	this->movie.push_back(m13);
	this->movie.push_back(m14);
	this->movie.push_back(m15);
	this->movie.push_back(m16);
	this->movie.push_back(m17);
	this->movie.push_back(m18);
	this->movie.push_back(m19);
	this->movie.push_back(m20);
	this->movie.push_back(m21);
	this->movie.push_back(m22);
			
};

//---------------Vetor categorias---------------//
/*DataBase::DataBase()
{
	this->add_categorie();
}*/

void DataBase::add_categorie(string c)
{
	this->categorie.push_back(c);
}

vector<string> DataBase::get_categorie()
{
	return this->categorie;
}

void DataBase::add_categorie()
{
	string c1  ("Fantasy  ");
	string c2  ("Action   ");
	string c3  ("Crime    ");
	string c4  ("Drama    ");
	string c5  ("Adventure");
	
	
	//adicionando categorias no VETOR
	this->categorie.push_back(c1);
	this->categorie.push_back(c2);
	this->categorie.push_back(c3);
	this->categorie.push_back(c4);
	this->categorie.push_back(c5);
	
			
};

//---------------Vetor notas---------------//
/*DataBase::DataBase()
{
	this->add_rate();
}*/

void DataBase::add_rate(float r)
{
	this->rate.push_back(r);
}

vector<float> DataBase::get_rate()
{
	return this->rate;
}

void DataBase::add_rate()
{
	float r1  (4.2);
	float r2  (4.3);
	float r3  (4.4);
	float r4  (4.5);
	float r5  (4.6);
	float r6  (4.7);
	float r7  (4.8);
	float r8  (3.1);
	float r9  (3.2);
	float r10 (3.4);
	float r11 (2.7);
	float r12 (2.9);
		
	
	//adicionando nota no VETOR
	this->rate.push_back(r1);
	this->rate.push_back(r2);
	this->rate.push_back(r3);
	this->rate.push_back(r4);
	this->rate.push_back(r5);
	this->rate.push_back(r6);
	this->rate.push_back(r7);
	this->rate.push_back(r8);
	this->rate.push_back(r9);
	this->rate.push_back(r10);
	this->rate.push_back(r11);
	this->rate.push_back(r12);
	
			
};

//---------------Vetor ano---------------//
/*DataBase::DataBase()
{
	this->add_year();
}*/

void DataBase::add_year(int y)
{
	this->year.push_back(y);
}

vector<int> DataBase::get_year()
{
	return this->year;
}

void DataBase::add_year()
{
	int y1   (1972);
	int y2   (1975);
	int y3   (1977);
	int y4   (1980);
	int y5   (1983);
	int y6   (1991);
	int y7   (1994);
	int y8   (1999);
	int y9   (2002);
	int y10  (2004);
	int y11  (2005);
	int y12  (2007);
	int y13  (2008);
	int y14  (2009);
	int y15  (2010);
	int y16  (2012);
	int y17  (2015);
	int y18  (2016);
 
		
	
	//adicionando nota no VETOR
	this->year.push_back(y1);
	this->year.push_back(y2);
	this->year.push_back(y3);
	this->year.push_back(y4);
	this->year.push_back(y5);
	this->year.push_back(y6);
	this->year.push_back(y7);
	this->year.push_back(y8);
	this->year.push_back(y9);
	this->year.push_back(y10);
	this->year.push_back(y11);
	this->year.push_back(y12);
	
			
};

