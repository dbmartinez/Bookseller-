// Serendipity Booksellers

// header files
#include<iostream>   // user inout & output
#include<string>	 // use of strings
#include<iomanip>	 // manipultion tactics
#include<cctype>	 // use of toupper function
#include<fstream> 	 // reading/writing to .txt 
#include"bookinfo.h"
#include"cashier.h"
#include"invmenu.h"
#include"reports.h"
using namespace std;

// constant function
const int SIZE = 35;

// main function
int main()
{
	// variables
	int choice;

	// create the objects of the classes
	Cashier cash;
	Invmenu imenu;
	Reports rport;
	Bookinfo binfo;

	// title
	cout << "\t\tSerendipity Booksellers\n";
	cout << "\t\t\t  Main Menu\n\n";

	// do-while loop for repeating menu
	// till user quits program
	do
	{
		// user choices
		cout << "1. Cashier Module\n";
		cout << "2. Inventory Database Module\n";
		cout << "3. Report Module\n";
		cout << "4. Exit\n\n";

		// user input for menu section
		cout << "Enter Your Choice: ";
		cin >> choice;
		cout << endl;

		// validate user input 
		while(choice < 1 || choice > 4)
		{
			// user input for menu section
			cout << "\nEnter in choice between 1 and 4.\n";
			cout << "Re-enter Choice: ";
			cin >> choice;
			cout << endl;
		}

		// determine which menu from users choice
		switch(choice)
		{
			case 1:
				cash.cashier(); // call the method cashier
				break;

			case 2:
				imenu.invMenu(); // call the method invMenu
				break;

			case 3:
				rport.reports(); // call the method reports
				break;
		}

		// if user quits program
		if(choice == 4)
		{
			cout << "\nThank You for Shopping at Serendipity Booksellers.\n";
			cout << "Goodbye!\n";
			exit(0);
		}

		cout << endl;

	} while(choice != 4); // repeat if user doesn't pick 4

	return 0;
}
// end main function
