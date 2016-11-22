#include "Author.h"

Author::Author()
{
	idNumber = 0;
	yearOfDeath = 0;
}

int Author::getIdNumber() const
{
	return idNumber;
}

int Author::getYearOfDeath() const
{
	return yearOfDeath;
}

void Author::setIdNumber(int newIdNumber)
{
	idNumber = newIdNumber;
}

void Author::setYearOfDeath(int newYearOfDeath)
{
	yearOfDeath = newYearOfDeath;
}

void Author::printAuthorInfo() const
{
	printName();
	cout << idNumber << ' ' << getDateOfBirth() << '-' << yearOfDeath << endl;
}

Author::~Author()
{

}
