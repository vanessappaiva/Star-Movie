#include "Movie.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>


#ifndef FILEMANAGER_H
#define FILEMANAGER_H

using namespace std;

class FileManager
{
	private:
		Movie m;
	
	public:
		//função para escrever em arquivo
		void write(const char*, string);
		void viewer();	
};
#endif

