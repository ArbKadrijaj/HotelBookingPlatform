#include <iostream>	
using namespace std;
#include"struct.h"
#include"main_menu.h"
#include<string>
#include <conio.h>



void book_check() {

	int bookCheckType, resNo;
	string yourName;
	bool bookNoCheck = false, bookNameCheck = false;


	cout << "\n\n\t\t\t 1)Check booking by typing your booking number"
		<< "\n\t\t\t 2)Check booking by typing your name"
		<< "\n\t\t\t 3)Go back to the main menu."
		<< "\n\n\t\t\t Please type 1,2 or 3:    ";
	cin >> bookCheckType;
	while (bookCheckType != 1 && bookCheckType != 2 && bookCheckType != 3) {

		cin.clear();
		cin.ignore(1234567, '\n');
		cout << "\n\t\t Please select a valid option!    ";
		cin >> bookCheckType;
	}//input validation

	if (bookCheckType == 1) {

		cout << "\n\n\t\t\t Type your booking number:    ";
		cin >> resNo;
		while (cin.fail() || resNo < 10000 && resNo > 20000)
		{
			cin.clear();
			cin.ignore(1234567, '\n');


			cout << "\n\t\t\t Please provide a valid 5 digit booking number:    ";
			cin >> resNo;


		}//input validation loop
		
		for (int p = 0; p <= 80; p++) {

			if (resNo == bookings[p].bookNo) {
				cout << "\n\t\t\t Booking found!";
				cout << "\n\n\n\t\t\t**********************************************";
				cout << "\n\n\t\t\t\t Booker's name: " << bookings[p].name;
				cout << "\n\n\t\t\t\t Room number: " << bookings[p].roomNo;
				cout << "\n\n\t\t\t\t Length of stay: " << bookings[p].length << " nights.";
				cout << "\n\n\t\t\t\t Total price: " << bookings[p].price << " Euros.\n";
				cout << "\n\t\t\t**********************************************";

				

				

				bookNoCheck = true;
				break;








			}

		}
		
		if (!bookNoCheck) {
			cout << "\n\n\t\t\t No bookings founds! Press Enter to go back to the main menu.";
			
			_getch();
			
			main_menu();
		}
		
		if (bookNoCheck) {
			cout << "\n\n\n\t\t\t Press Enter to get back to the main menu!";
		
			
			_getch();
			

			main_menu();
		}
	}
		

	else if (bookCheckType == 2) {
		cout << "\n\n\t\t\t Type your name:    ";
		cin.ignore();
		getline(cin, yourName);
		if (yourName.empty()) {


			cout << "\n\t\tPlease type your name as used when booking    ";
			cin.ignore();
			getline(cin, yourName);


		}

		for (int q = 0; q <= 80; q++) {

			if (yourName == bookings[q].name) {

				cout << "\n\t\t\t Booking found!";
				cout << "\n\n\n\t\t\t**********************************************";
				cout << "\n\n\t\t\t\t Booking number: " << bookings[q].bookNo;
				cout << "\n\n\t\t\t\t Room number: " << bookings[q].roomNo;
				cout << "\n\n\t\t\t\t Length of stay: " << bookings[q].length << " nights.";
				cout << "\n\n\t\t\t\t Total price: " << bookings[q].price << " Euros.\n";
				cout << "\n\t\t\t**********************************************";


				


				bookNameCheck = true;
				break;







			}

		}


		if (!bookNameCheck) {
			cout << "\n\n\t\t\t No bookings founds! Press Enter to go back to the main menu.";
			_getch();
			
			main_menu();
		}

		if (bookNameCheck) {
			cout << "\n\n\n\t\t\t Press Enter to get back to the main menu!";


			_getch();
		

			main_menu();


		}
	}
			
	else if(bookCheckType==3)
		main_menu();

	

		}


	



