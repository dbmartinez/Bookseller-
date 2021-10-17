// Serendipity Booksellers
// inventory menu

#include<iostream>
#include<string>
#include<fstream>
#include"invmenu.h"
using namespace std;

// constant variable
const int SIZE = 10;

// default constructor
Invmenu::Invmenu()
{
	

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
	string enterBook[SIZE], publisher[SIZE], isbn_num[SIZE], a_name[SIZE], purchase_date[SIZE];
	int bookQuantity[SIZE], amount_of_books;
	double wholeCost[SIZE], retailCost[SIZE];
	ofstream writeFile;

	// open textfile to write to
	writeFile.open("bookinfo.txt");

	cout << "\nYou've selected to add a book.\n";
	cin.ignore();
	cout << "\nHow Many Books Would You Like to Add?: ";
	cin >> amount_of_books;

	// loop the amount of book the user would like to add
	for(int i = 0; i < amount_of_books; i++)
	{
		cout << "\nEnter in the ISBN Number: ";
		//getline(cin, isbn_num[i]);
		writeFile << isbn_num[i];
		cin.ignore();

		cout << "\nEnter in the Author's Name: ";
		//getline(cin, a_name[i]);
		writeFile << a_name[i];

		cout << "\nEnter a Book to Add: ";
		//getline(cin, enterBook[i]);
		writeFile << enterBook[i];

		cout << "\nEnter in the Publishers name: ";
		getline(cin, publisher[i]);

		cout << "\nEnter in the Date of Purchase: ";
		getline(cin, purchase_date[i]);

		cout << "\nEnter in the Quantity of Books: ";
		cin >> bookQuantity[i];

		cout << "\nEnter in the Books Wholesale Cost: $";
		cin >> wholeCost[i];

		cout << "\nEnter in the Books Retail Cost: $";
		cin >> retailCost[i];


		for(int j = 0; j < amount_of_books; j++)
		{
			cout << isbn_num[j] << a_name[j] << enterBook[j] << publisher[j] << purchase_date[j] << bookQuantity[j] << wholeCost[j] << retailCost[j];
		}
	}	

	cout << "\nBook Information has been added to the Database.\n";
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