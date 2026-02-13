#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	int age;
	string name;
	cout << "Enter your age:";
	cin >> age; //there is a '\n' still in buffer
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cout << "Enter your age:" << age << endl;

	cout << "Enter your name:";
	getline(cin,name); 
	cout << "your name is:" <<name;
	return 0;
}
