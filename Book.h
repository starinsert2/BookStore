#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

enum condition { excellent, good, fair, poor };
class Book
{
	public:
		Book();
		string getBookID() const;
		string getTitle() const;
		string getPublisher() const;
		condition getCondition() const;
		int getPublication() const;
		int getEdition()const;
		int getCost() const;
		int getRetail()const;
		void setBookID(int newID);
		void setTitle(const string newTitle);
		void setPublisher(const string newPublisher);
		void setCondition(condition newCondition);
		void setPublication(int newPublication);
		void setEdition(int newEdition);
		void setCost(int newCost);
		void setRetailPrice(int newRetailPrice);
		
		~Book();
private:
	string bookID, title, publisher;
	int publication, edition, cost, retailPrice;
	condition bookCondition;
	bool isSold;
};
#endif // !