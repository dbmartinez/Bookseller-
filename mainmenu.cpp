// Serendipity Booksellers

// header files
#include<iostream>   // user inout & output
#include<string>	 // use of strings
#include<iomanip>	 // manipultion tactics
#include<cctype>	 // use of toupper function
#include<fstream> 	 // reading/writing to .txt 
using namespace std;

// Function prototypes
void cashier();
void invMenu();
void lookUpBook();
void addBook();
void editBook();
void deleteBook();
void reports();
void repListing();
void repWholesale();
void repRetail();
void repQty();
void repCost();
void repAge();
void bookInfo();
//void bookInfo(string, string, string, string, string, int, double, double);

// constant function
const double SALES_TAX = 0.06;
const int SIZE = 35;

// main function
int main()
{
	// variables
	int choice;

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

		switch(choice)
		{
			case 1:
				cashier();
				break;

			case 2:
				invMenu();
				break;

			case 3:
				reports();
				break;
		}

		// if user quits program
		if(choice == 4)
		{
			// exit program
			cout << "\nThank You for Shopping at Serendipity Booksellers.\n";
			cout << "Goodbye!\n";
			exit(0);
		}

		cout << endl;

	} while(choice != 4);

	return 0;
}
// end main function

// cashier function
void cashier()
{
	// variables
	char again;
	string date, isbn_num, title, authorName, publisher;
	int bookQuantity;
	double bookPrice, subtotal, total, tax;
	double retail = 9.99;

	// title
	cout << "\t\tSerendipity Book Sellers\n\n";
	
	do
	{
		cin.ignore();

		// user input 
		cout << "\nEnter in Date(MM/DD/YR) of Sale: ";
		getline(cin, date);

		cout << "\nEnter in the Quantity of Books being Purchased: ";
		cin >> bookQuantity;
		cin.ignore();	// ignore the newline characted when enter is pressed

		cout << "\nEnter in ISBN Number: ";
		getline(cin, isbn_num);

		cout << "\nEnter in AuthorName: ";
		getline(cin, authorName);

		cout << "\nEnter in Publisher: ";
		getline(cin, publisher);

		cout << "\nEnter in Title of Book: ";
		getline(cin, title);

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
		cout << setw(32) << title;
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
			cout << "\n\nThank You for Shopping Serendipity!\n";

	} while(toupper(again) == 'Y');

}
// end cashier function

// Inventory function
void invMenu()
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
		{
			// return to main menu
			cout << "\nReturning to Main Menu.\n";
			main();
		}
		
		cout << endl;

	} while(choice != 5);

}

// Inventory function lookUpBook
void lookUpBook()
{
	// variables
	bool found = false;
	int index = 0;
	string searchTitle;

	cin.ignore();

	// user input
	cout << "\nEnter the Title of Book You're Searching for: \n";
	getline(cin, searchTitle);

	/*
	while(!found && index < SIZE)
	{
		// if found 
		//if(bookTitle[index] == searchTitle)
			//found = true;

		else
			index++;
	}*/

	if(found)
		bookInfo();

	else
		cout << "\nThe Book You Entered is Not In Our Inventory.\n";
}

// function addBook
void addBook()
{
	cout << "\nYou've selected to add a book.\n";
}

// function editBook
void editBook()
{
	cout << "\nYou've selected to edit a book.\n";
}

// function lookUpBook
void deleteBook()
{
	cout << "\nYou've selected to delete a book.\n";
}
// end Inventory functions

// reports function
void reports()
{
	// variables
	int choice;

	// main title
	cout << "\t\tSerendipity Booksellers\n";
	cout << "\t\t\t\tReports\n\n";		

	// do-while loop for repeating menu
	// till user quits program
	do
	{
		// meun selection
		cout << "1. Inventory Listing\n";
		cout << "2. Inventory Wholesale Value\n";
		cout << "3. Inventory Retail Value\n";
		cout << "4. Listing by Quantity\n";
		cout << "5. Listing by Cost\n";
		cout << "6. Listing by Age\n";
		cout << "7. Return to Main Menu\n\n";

		// user input for menu section
		cout << "Enter Your Choice: ";
		cin >> choice;

		// validate user input 
		while(choice < 1 || choice > 7)
		{
			// user input for menu section
			cout << "\nEnter in choice between 1 and 7.\n";
			cout << "Re-enter Choice: ";
			cin >> choice;
		}

		switch(choice)
		{
			case 1:
				repListing();
				break;

			case 2:
				repWholesale();
				break;

			case 3:
				repRetail();
				break;

			case 4:
				repQty();
				break;

			case 5:
				repCost();
				break;

			case 6:
				repAge();
				break;
		}

		// if user quits program
		if(choice == 7)
		{
			// return to main menu
			cout << "\nReturning to Main Menu.\n";
			main();
		}

		cout << endl;

	} while(choice != 7);
}

// repListing function
void repListing()
{
	cout << "\nYou've Selected Inventory Listing\n";
}

// repWholesale function
void repWholesale()
{
	cout << "\nYou've Selected Wholesale Value\n";
}

// repRetail function
void repRetail()
{
	cout << "\nYou've Selected Retail Value\n";
}

// repQty function
void repQty()
{
	cout << "\nYou've Selected Listing by Quantity\n";
}

// repCost function
void repCost()
{
	cout << "\nYou've Selected Listing by Cost\n";
}

// repAge function
void repAge()
{
	cout << "\nYou've Selected Listing by Age\n";
}
// end reports functions

// Bookinfo function
// need to pass the folowwing parameters to display
// output to user
void bookInfo()
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