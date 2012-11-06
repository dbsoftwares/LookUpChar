// LookUpChar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// Startup, welcome msg
	cout << "Session started...";
	cout << "This program will look up the given character in the string you provide!";


	// Get the string
	string providedString;
	cout << "Provide the string below:";
	getline(cin, providedString);

	// Get the character
	char lookUpThisChar;
	cout << "Specify the character you are looking for:";
	lookUpThisChar = getchar();
	
	/* Starting the loop which will search for the character in the string
	 *
	 * It will search through the string, exit if find one.
	 */
	
	bool found = false;
	int i = 0;
	int firstPosition = 0;
	while (found != true && i <= providedString.length()) {
		// 1, POSSIBLE: convert the string into char array
		// 2, search the string
	}

	if ( found == true) {
		cout << "I found the character you are looking for @ "+firstPosition;
	} else (x < 0) {
		cout << "I can not found the character you are looking for.";
	}

	cou << "Session terminated..."
	return 0;
}

