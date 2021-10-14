// Serendipity Booksellers
// reports

#include<iostream>
#include"reports.h"
using namespace std;


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
			cout << "\nReturning to Main Menu.\n";

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