// Serendipity Booksellers
// cashier

// header file
#include<iostream>
#include<iomanip>
#include<string>
#include<cctype>
#include"cashier.h"
using namespace std;

// default constructor
Cashier::Cashier():SALES_TAX(0.06)
{

}

// destructor
Cashier::~Cashier()
{
	
}

// main function
void Cashier::cashier()
{
	// variables
	char again;
	string date, isbn_num, bookTitle;
	int bookQuantity;
	double bookPrice, subtotal, total, tax;

	// title
	cout << "Serendipity Book Sellers\n\n";
	cin.ignore();
	
	do
	{
		// user input 
		cout << "\nEnter in Date(MM/DD/YR) of Sale: ";
		getline(cin, date);

		cout << "\nEnter in the Quantity of Books being Purchased: ";
		cin >> bookQuantity;
		cin.ignore();	// ignore the newline characted when enter is pressed

		cout << "\nEnter in ISBN Number: ";
		getline(cin, isbn_num);

		cout << "\nEnter in Title of Book: ";
		getline(cin, bookTitle);

		cout << "\nEnter in Price of Book: $ ";
		cin >> bookPrice;

		// display date of purchase 
		cout << "\n\nDate: " << date;

		// calculate total price
		subtotal = bookQuantity * bookPrice;
		tax = subtotal * SALES_TAX;
		total = subtotal + tax;

		// set monetary values to 2 decimal places
		cout << fixed << showpoint << setprecision(2);

		// display information about book
		cout << "\n\nQTY\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n";
		cout << "----------------------------------------";
		cout << "---------------------------------------\n";
		cout << bookQuantity << "\t"; 
		cout << left << setw(16) << isbn_num;
		cout << setw(32) << bookTitle;
		cout << "$ " << bookPrice;
		cout << "\t\t$ " << subtotal;
		cout << endl << endl << endl;

		// total for book
		cout << "\t\tSubtotal:\t\t\t\t\t\t$ " << setw(6) << subtotal << endl;
		cout << "\t\tTax:\t\t\t\t\t\t\t$ " << setw(6) << tax << endl;
		cout << "\t\tTotal:\t\t\t\t\t\t\t$ " << setw(6) << total << endl;

		// ask user if they would like to repeat program
		cout << "\nWould you like to add another purchase?(y/n): ";
		cin >> again;
		cin.ignore();

		// check condition of user input
		while(toupper(again) != 'Y' && toupper(again) != 'N')
		{
			cout << "\nPlease re-enter choice?(y/n): ";
			cin >> again;	
			cin.ignore();
		}

		// if user quits
		if(toupper(again) == 'N')
			cout << "\n\nReturning to Main Menu.\n";

	} while(toupper(again) == 'Y');
}
