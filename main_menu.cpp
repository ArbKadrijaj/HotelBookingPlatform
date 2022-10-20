#include <iostream>
using namespace std;
#include "room_book.h"
#include "book_check.h"




void main_menu() {

	int y=0;

	cout << "\n\t\t\t\t\t\t*************************"; //used /t to provide horizontal space in order to "center" the text.
	cout << "\n\t\t\t\t\t\t      * MAIN MENU *";
	cout << "\n\t\t\t\t\t\t*************************";
	cout << "\n\n\n\t\t\t\t1.Book a room";
	cout << "\n\t\t\t\t2.Check your booking";
	cout << "\n\t\t\t\t3.Exit";
	cout << "\n\n\t\t\t\tEnter your choice: ";
	
	
	cin >> y;
	
	while (y != 1 && y != 2 && y != 3) {

		cin.clear(); //this clears the cin buffer 
		cin.ignore(1234567, '\n');// this ignores characters and the nextline automatically added after cin.
		cout << "Please select 1 to book a room, 2 to check your booking, or 3 to exit the program: ";
		cin >> y;
	}//input validation
		

		switch (y) {

		case (1):

			room_book();
			break;


		case (2):
			book_check();
			break;

		case (3):
         EXIT_SUCCESS;
			


		

			


		}






	}

	

