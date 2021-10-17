// Serendipity Booksellers
// inventory menu

#include<iostream>
#include<string>
#include<fstream>
#include"invmenu.h"
using namespace std;

// default constructor
Invmenu::Invmenu()
{
	choice = 0;

}

// destructor
Invmenu::~Invmenu()
{


}

// inventory menu
void Invmenu::invMenu()
{
	// local variables
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

		// going to the area where the user choose
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
	// local variables
	string fileName = "bookinfo.txt";
	string bookTitle;
	ifstream readFile;

	// open file to read from
	readFile.open(fileName);

	cout << "\nYou've selected to look up book.\n";
	cin.ignore();

	cout << "\nEnter in a Book that You Would like to look up: ";
	getline(cin, bookTitle);





	readFile.close();
}

// function addBook
void Invmenu::addBook()
{
	// local variables
	string enterBook;
	ofstream writeFile;

	// open textfile to write to
	writeFile.open("bookinfo.txt");

	cout << "\nYou've selected to add a book.\n";
	cin.ignore();

	cout << "\nEnter a Book to Add: ";
	getline(cin, enterBook);
	writeFile << enterBook;

	cout << "\n" << enterBook << " Added to Database.\n";



	writeFile.close();
}

// function editBook
void Invmenu::editBook()
{
	// local variable
	string editBook;

	cout << "\nYou've selected to edit a book.\n";

	cout << "\nEnter the Book You Would like to Edit: ";
	cin >> editBook;
}

// function lookUpBook
void Invmenu::deleteBook()
{
	// local variable
	string delete_book;

	cout << "\nYou've selected to delete a book.\n";\

	cout << "\nEnter the Book You Would like to Delete: ";
	getline(cin, delete_book);
}