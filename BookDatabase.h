#ifndef BOOKDATABASE_H
#define BOOKDATABASE_H

#include "Book.h"
#include <iostream>

class BookDatabase
{
public:
	BookDatabase();
	void printall() const;
	void editBookAt(int index);
	Book getBook(int index) const;
	~BookDatabase();
private:
	Book* bookPtr;
	int capacity, used;
};
#endif // !BOOKDATABASE_H