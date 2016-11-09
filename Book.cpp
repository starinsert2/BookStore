#include "Book.h"

Book::Book()
{
	bookID = "";
	title = "";
	author = "";
	publisher = "";
	publication = 0;
	edition = 0;
	bookCondition = good;
	isSold = false;
}

string Book::getBookID() const
{
	return bookID;
}

string Book::getTitle() const
{
	return title;
}

string Book::getPublisher() const
{
	return publisher;
}

condition Book::getCondition() const
{
	return bookCondition;
}

int Book::getPublication() const
{
	return publication;
}

int Book::getEdition()const
{
	return edition;
}

int Book::getCost() const
{
	return cost;
}

int Book::getRetail()const
{
	return retailPrice;
}

void Book::setBookID(const string& newID)
{
	bookID = newID;
}

void Book::setTitle(const string& newTitle)
{
	title = newTitle;
}

void Book::setPublisher(const string& newPublisher)
{
	publisher = newPublisher;
}

void Book::setCondition(condition& newCondition)
{
	bookCondition = newCondition;
}

void Book::setPublication(int newPublication)
{
	publication = newPublication;
}

void Book::setEdition(int newEdition)
{
	edition = newEdition;
}

void Book::setCost(int newCost)
{
	cost = newCost;
}

void Book::setRetailPrice(int newRetailPrice)
{
	retailPrice = newRetailPrice;
}

void Book::printBook() const
{
	cout << "Book ID: " << bookID << endl;
	cout << "Title: " << title << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Published " << publication << endl;
	cout << "Edition: " << edition << endl;
	cout << "Condition: " << bookCondition << endl;
	if (isSold)
		cout << "Sold to" << endl;
	else
		cout << "In Stock" << endl;
	cout << endl;

}
Book::~Book()
{

}