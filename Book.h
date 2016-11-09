#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

enum condition { excellent, good, fair, poor };
class Book
{
	friend istream& operator>>(istream& ins, Book& tempBook);
	public:
		Book();
		void addNewBook(istream& ins);
		string getBookID() const;
		string getTitle() const;
		string getAuthor() const;
		string getPublisher() const;
		condition getCondition() const;
		int getPublication() const;
		int getEdition()const;
		int getCost() const;
		int getRetail()const;
		void setBookID(const string& newID);
		void setTitle(const string& newTitle);
		void setPublisher(const string& newPublisher);
		void setAuthor(const string& newAuthor);
		void setCondition(condition& newCondition);
		void setPublication(int newPublication);
		void setEdition(int newEdition);
		void setCost(int newCost);
		void setRetailPrice(int newRetailPrice);
		void printBook() const;
		~Book();
private:
	string bookID, title, publisher, author;
	int publication, edition, cost, retailPrice;
	condition bookCondition;
	bool isSold;
};

#endif // !