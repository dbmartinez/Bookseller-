// Serendipity Booksellers
// book info

#include<iostream>
#include"bookinfo.h"
using namespace std;

// default constructor
Bookinfo::Bookinfo()
{


}

// destructor
Bookinfo::~Bookinfo()
{


}

void Bookinfo::bookInfo()
{
	// menu title
	cout << "\t\tSerendipity Booksellers\n";
	cout << "\t\t\tBook Information\n\n";	

	// information 
	cout << "ISBN: " << endl;
	cout << "Title: " << endl;
	cout << "Author: " << endl;
	cout << "Publisher: " << endl;
	cout << "Date Added: " << endl;
	cout << "Quantity-On-Hand: " << endl;
	cout << "Wholesae Cost: " << endl;
	cout << "Retail Cost: " << endl;

}