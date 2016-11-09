#include "BookDatabase.h";

#include <iostream>

using namespace std;

void displayMenu();
void processChoice(BookDatabase& database);

int main()
{
	BookDatabase database;

	displayMenu();
	processChoice(database);

	cout << endl;

	system("pause");
	return 0;
}

void displayMenu()
{
	cout << "\n*** MAIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Add a new book" << endl;
	cout << "    2: Print all books" << endl;
	cout << "    3: Edit a book" << endl;

	cout << "    7: Exit" << endl;
}

void processChoice(BookDatabase& database)
{
	string stringEdit = "";
	int intEdit, choice;
	Book bookie;

	cout << "\nEnter your choice: ";
	cin >> choice;
	cout << endl;

	while (choice != 7)
	{
		switch (choice)
		{
		case 1:
			cout << "1. Add a book" << endl;
			cin.ignore(1, ' ');
			cin >> bookie;
			database.addBook(bookie);

			break;
		case 2:
			database.printall();

			break;

		case 3:
			database.printBookTitle();
			cout << "Enter index to edit? ";
			cin >> intEdit;
			database.editBookAt(intEdit);

			break;
		default:
			cout << "Invalid Selection" << endl;

			break;
		}

		system("Pause");
		system("CLS");
		displayMenu();

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
	}

}