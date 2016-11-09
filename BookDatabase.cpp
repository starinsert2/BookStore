#include "BookDatabase.h"

BookDatabase::BookDatabase()
{
	used = 0;
	capacity = 5;
	bookPtr = new Book[capacity];
}

void BookDatabase::printall() const
{
	for (int i = 0; i < 5; i++)
		bookPtr[i].printBook();
}

void BookDatabase::editBookAt(int index)
{

	cout << "What would you want to edit?" << endl;
	cout << " 1. Title" << endl;
	cout << " 2. BookID" << endl;
	cout << " 3. Publisher" << endl;
	cout << " 4. Publication Date" << endl;
	cout << " 5. Edition" << endl;
	cout << " 6. Cost" << endl;

	int choice, intEdit = 0;
	string stringEdit;

	cout << "\nEnter your choice: ";
	cin >> choice;
	cout << endl;

	while (choice != 7)
	{
		switch (choice)
		{
		case 1:
			cout << "Enter new Title" << endl;
			cin.ignore(1, ' ');
			getline(cin, stringEdit);
			bookPtr[index].setTitle(stringEdit);

			break;

		case 2:
			cout << "Enter new bookID" << endl;
			cin.ignore(1, ' ');
			getline(cin, stringEdit);
			bookPtr[index].setBookID(stringEdit);

			break;

		case 3:
			cout << "Enter new Publisher" << endl;
			cin.ignore(1, ' ');
			getline(cin, stringEdit);
			bookPtr[index].setPublisher(stringEdit);

			break;
		default:
			cout << "Invalid Selection" << endl;

			break;
		}

		system("Pause");

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
	}

}

Book BookDatabase::getBook(int index) const
{	
	return bookPtr[index];
}

BookDatabase::~BookDatabase()
{

}