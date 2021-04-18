#include "MainInterface.h"

//função que mostra o menu principal
int MainInterface::show_main_menu()
{	
	//função que muda o titulo do programa
	system("title Star Movie");
	//função ue muda as cores do programa
	system("Color 0e");
	
	int user_option;
	//arte do nome do programa
	cout << " _______ _______ _______ ______      _______ _______ ___ ___ _______ _______ " <<endl;
	cout << "|     __|_     _|   _   |   __ \     |   |   |       |   |   |_     _|    ___|" <<endl;
	cout << "|__     | |   | |       |      <    |       |   -   |   |   |_|   |_|    ___|" <<endl;
	cout << "|_______| |___| |___|___|___|__|    |__|_|__|_______|\ _____/|_______|_______|" <<endl;
	cout << "                                                                             " <<endl;
	cout << "Welcome to the Star Movie.\n";
	cout << "If you want to see any movie and need to know about the rate, you came to the right software.\n";
	cout << "Enjoy!\n" <<endl;
	//menu principal
	cout << "Choose an option:" << endl;
	cout << "1 - Register a movie" << endl;
	cout << "2 - See all the movies" << endl;
	cout << "3 - Search a movie by categorie" << endl;
	cout << "4 - Search a movie by rate" << endl;
	cout << "5 - Search a movie by year" << endl;
	cout << "0 - Exit" << endl; 
	cin	 >> user_option;

return user_option;

}

//função que limpa a tela
void MainInterface::clean_screen()
{
	getch();
	system ("cls");
}

//função que mostra os filmes
void MainInterface::show_movie(string n, float r, int y, string d, string c)
{
	cout << "Name: " << n << " | Rate: " << r << " | Year: " << y << " | Director: " << d << " | Categorie: " << c << endl;
}

//função de erro
void MainInterface::show_error()
{
	cout << "This is not a option!\n";
}
