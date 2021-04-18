#include "FileManager.h"

//função para escrever em arquivo
void FileManager::write(const char* file_name, string text)
{
	ofstream file;
	file.open(file_name, ios_base::app);
	file << text << endl;
	file.close();
}
/*
void FileManager::viewer()
{
	ifstream file;
	file.open("Star_Movie_Register.txt", ofstream::app);
	string output;
	if(file.is_open())
		{
			while (getline (file, output))
			{
				cout << output << endl;
			}
		}
		file.close();

	
	char delimiter = '#'; 
	vector<string> internal;
 	string tok;
 	string answer;
 	int score = 0;
 	
for(int i = 0; file (i);i++)
{	
 
  stringstream ss;
  ss (file(i));
  
  
while(getline(ss, tok, delimiter)) 
  {
    internal.push_back(tok);
  }
  	
  
for(int j = 0; j < internal.size(); j++ )
  {
	
	  if(j == 8)
	  {
	  	cin >> answer;
	  	if(answer==internal.at(8))
	  	{
			score = score + 1;
		}
	  	
	  } 
	  	else
		cout << internal.at(j) << endl;
  }
 


internal.clear();
}
	
	cout << score;

}
*/
