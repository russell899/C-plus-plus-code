/* string */

#include <iostream>

using namespace std;

int main()
{
	string phrase = "Giraffe Academy\n";
	cout << phrase;
	cout << "i love c++\n";
	cout << phrase.length() << endl; 
	cout << phrase[0] << endl;
	phrase[0] = 'B';
	cout << phrase << endl;
	cout << phrase.find("Academy",1);
	
	return 0;
 } 
