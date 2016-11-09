#include "BookDatabase.h";

#include <iostream>

using namespace std;

int main()
{
	BookDatabase database;
	database.getBook(2).printBook();
	database.editBookAt(2);
	database.printall();

	database.getBook(2).getTitle();

	cout << endl;

	system("pause");
	return 0;
}