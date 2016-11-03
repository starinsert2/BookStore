#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

using namespace std;

class Author
{
public:
	Author();
	//Accesor Functions
	~Author();
private:
	string lastName, firstName;
	int idNumber, yearOfBirth;
};
#endif