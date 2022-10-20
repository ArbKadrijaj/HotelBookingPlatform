#include <iostream>
#include"main_menu.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include "struct.h"
#include<conio.h>
using namespace std;




extern int a;


void room_book() {

	srand((unsigned)time(0));//in order to get different rand() number each time the code runs for bookNo

	 


	int  roomType, freeRoomS = 0, freeRoomD = 0, singleRoomPrice = 100, doubleRoomPrice = 150, Nights; //freeRoomS is the variable for the number of single rooms and freeRoomD is the variable for free double rooms
	bool freeCheckS, freeCheckD;
	double discount = 0;

	
	


	const int singleRooms = (a / 2);
	const int doubleRooms = a;



	cout << "\n\n\t\t\tOur hotel has a total number of " << a << " rooms";
	cout << "\n\n\t\t\tRooms 1 to " << singleRooms << " are singles, while rooms " << singleRooms + 1 << " to " << doubleRooms + 1 << " are doubles.";
	cout << "\n\n\t\t\tSingles cost 100 Euros per night, while double rooms cost 150 Euros per night!";




	for (int i = 0; i < singleRooms; i++) {
		if (bookings[i].roomNo == 0)

			freeRoomS += 1;


	}

	for (int j = singleRooms; j < doubleRooms; j++) {

		if (bookings[j].roomNo == 0)

			freeRoomD += 1;

	}

	cout << "\n\n\t\t\tThere currently are " << freeRoomS << " single and " << freeRoomD << " double rooms available. ";

	if (freeRoomS > 0)

		freeCheckS = true;//giving value to boolean variable
	else
		freeCheckS = false;

	if (freeRoomD > 0)

		freeCheckD = true;//also giving true value to boolean variable in case there are rooms available

	else freeCheckD = false;










	
	cout << "\n\n\t\t\t\t\t 1)Book a a single room.";
	cout << "\n\n\t\t\t\t\t 2)Book double room.";
	cout << "\n\n\t\t\t\t\t 3)Go back to the main menu.";
	cout << "\n\n\n\t\t\t Please select the type of room you would like to book:    ";
	cin >> roomType;

	while (roomType != 1 && roomType != 2 && roomType != 3) {

		cin.clear();
		cin.ignore(1234567, '\n');
		cout << "\n\t\tPlease select a valid option!    ";
		cin >> roomType;
	}//input validation

	switch (roomType) {

	case (1):

		cout << "\n\t\t\t For how many nights do you intend to stay at our hotel?    ";
		cin >> Nights;
		while (cin.fail() || Nights <= 0)
		{
			cin.clear();
			cin.ignore(1234567, '\n');


			cout << "\n\t\t\t Please provide your length of stay in natural numbers    ";
			cin >> Nights;


		}//input validation loop


		if (Nights >= 5) {
			discount = 0.1;
			cout << "\n\t\t\t Congrats! You've qualified for a 10% discount.\n\n";
		}


		if (freeRoomS) {
			for (int k = 0; k < singleRooms - 1; k++) {
				if (bookings[k].roomNo == 0) {

					cout << "\n\t\t\t Please provide your name:    ";
					cin.ignore();
					getline(cin, bookings[k].name);
					bookings[k].roomNo = k + 1;
					bookings[k].bookNo = rand() % (20000 - 10000 + 1) + 10000;
					bookings[k].price = (singleRoomPrice * Nights) - (singleRoomPrice * Nights * discount);
					bookings[k].length = Nights;


					cout << "\n\n\t\t\t You have made a reservation! Total cost for your stay is: " << bookings[k].price << " Euros.";
					cout << " \n\t\t\t Your reservation number is: " << bookings[k].bookNo << ".";

					cout << "\n\n\n\t\t\t Press Enter to get back to the main menu!";
					_getch();
					

					main_menu();

					break;
				}


			}


		}
		else {
			cout << "\n\n\t\t\t Sorry, there are no  single room available right now!"
				<< "\n\t\t\t If you book a double room for 5 nights or more, you qualify for a 20% discount!! "
				<< "\n\n\n\t\t\t Press any key to get back to the main menu";
			_getch();
			
			main_menu();

		}
		

		break;



	case (2):

		cout << "\n\n\t\t\t For how many nights do you intend to stay at our hotel?    ";
		cin >> Nights;
		while (cin.fail() || Nights <= 0)
		{
			cin.clear();
			cin.ignore(1234567, '\n');


			cout << "\n\n\t\t\t Please provide your length of stay in natural numbers!\n    ";
			cin >> Nights;


		}//input validation loop
		if (Nights >= 5) {
			discount = 0.2;
			cout << "\n\t\t\t Congrats! You've qualified for a 20% discount.\n\n";
		}


		if (freeRoomD) {
			for (int l = singleRooms; l <= doubleRooms; l++) {
				if (bookings[l].roomNo == 0) {

					cout << "\n\t\t\t Please provide your name:    ";
					cin.ignore();
					getline(cin, bookings[l].name);
					bookings[l].roomNo = l + 1;
					bookings[l].bookNo = rand() % (20000 - 10000 + 1) + 10000;
					bookings[l].price = (doubleRoomPrice * Nights) - (doubleRoomPrice * Nights * discount);
					bookings[l].length = Nights;


					cout << "\n\n\n\t\t\t You have made a reservation! Total cost for your stay is: " << bookings[l].price << " Euros.";
					cout << "\n\t\t\t Your reservation number is: " << bookings[l].bookNo << ".";

					cout << "\n\n\n\t\t\t Press Enter to get back to the main menu!";
					_getch();
					

					main_menu();
					break;

				}


			}


		}
		else {
			cout << "\n\n\n\t\t\t Sorry, there are no  double room available right now!"
				<< "\n\n\t\t\t If you book a single room for 5 nights or more, you qualify for a 10% discount!! "
				<< "\n\n\n\n\t\t\t Press Enter to get back to the main menu";
			_getch();
			
			main_menu();

		}

		break;

	case(3):
		main_menu();
		break;


	}

}
