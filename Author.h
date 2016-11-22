#ifndef AUTHOR_H
#define AUTHOR_H

#include "Person.h"
#include <string>

using namespace std;

class Author: public Person
{
public:
	Author();
	int getIdNumber() const;
	int getYearOfDeath() const;
	void setIdNumber(int newIdNumber);
	void setYearOfDeath(int newYearOfDeath);
	void printAuthorInfo() const;

	~Author();
private:
	int idNumber, yearOfDeath;
};
#endif
