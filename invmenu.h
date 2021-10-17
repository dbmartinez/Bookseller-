// invmenu.h

#ifndef INVMENU_H
#define INVMENU_H

class Invmenu
{
	private:
		int choice;


	public:
		Invmenu();
		~Invmenu();

		void invMenu();
		void lookUpBook();
		void addBook();
		void editBook();
		void deleteBook();

};
#endif