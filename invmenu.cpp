// Serendipity Booksellers
// inventory menu

#include<iostream>
#include"invmenu.h"
using namespace std;

Invmenu::Invmenu()
{


}

Invmenu::~Invmenu()
{


}

//
void Invmenu::invMenu()
{
	// variables
	int choice;

	// main title
	cout << "\t\tSerendipity Booksellers\n";
	cout << "\t\t  Inventory Database\n\n";

	// do-while loop for repeating menu
	// till user returns to main menu	
	do
	{
		// user choices
		cout << "1. Look Up a Book\n";
		cout << "2. Add a Book\n";
		cout << "3. Edit a Book's Record\n";
		cout << "4. Delete a Book\n";
		cout << "5. Return to Main Menu\n";

		// user input for menu section
		cout << "\nEnter Your Choice: ";
		cin >> choice;

		switch(choice)
		{
			case 1:
				lookUpBook();
				break;

			case 2:
				addBook();
				break;

			case 3:
				editBook();
				break;

			case 4:
				deleteBook();
				break;
		}

		// validate user input 
		while(choice < 1 || choice > 5)
		{
			// user input for menu section
			cout << "\nEnter in choice between 1 and 5.\n";
			cout << "Re-enter Choice: ";
			cin >> choice;
		}

		// if user quits program
		if(choice == 5)
			cout << "\nReturning to Main Menu.\n";
		
		cout << endl;

	} while(choice != 5);

}

// function lookUpBook
void Invmenu::lookUpBook()
{
	cout << "\nYou've selected to look up book.\n";
}

// function addBook
void Invmenu::addBook()
{
	cout << "\nYou've selected to add a book.\n";
}

// function editBook
void Invmenu::editBook()
{
	cout << "\nYou've selected to edit a book.\n";
}

// function lookUpBook
void Invmenu::deleteBook()
{
	cout << "\nYou've selected to delete a book.\n";
}