#ifndef BOOKDATABASE_H
#define BOOKDATABASE_H

#include "Book.h"
#include <iostream>

class BookDatabase
{
public:
	BookDatabase();
	void addBook(const Book& newBook);
	void printall() const;
	void editBookAt(int index);
	Book getBook(int index) const;
	void printBookTitle() const;
	~BookDatabase();
private:
	Book* bookPtr;
	int capacity, used;
};
#endif // !BOOKDATABASE_H