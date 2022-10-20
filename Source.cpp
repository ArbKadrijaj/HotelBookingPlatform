#include <iostream>	
using namespace std;
#include "main_menu.h"
#include"struct.h"
#include<conio.h>

int a = 2;

roomBook bookings[80] = {};//sets default value of all array elements to null


int main() {

	

	a *= rand() % (40 - 20 + 1) + 20;//generates an even number of rooms betwen 40-80
	
	

	cout << "\n\t\t\t\t*******************************************************";
    cout << "\n\t\t\t\t  Welcome to the Grand Budapest Hotel booking platform";
	cout << "\n\t\t\t\t*******************************************************";
	cout << "\nPress Enter to continue...";
	_getch();// system waits for any user input in order to continue...
	



	
	 main_menu();


	 return 0;

}