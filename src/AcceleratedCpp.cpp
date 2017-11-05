//============================================================================
// Name        : AcceleratedCpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*
	 * Please enter your first name: Alex
	 * ****************
	   *              *
	   * Hello, Alex! *
	   *              *
	   ****************
	 * */

	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	int vertical_pad = 1;
	int horizontal_pad = 1;

	// Exercises 2-3 ask the user to supply the amount of spacing
	cout << "Enter the amount of vertical spacing: ";
	cin >> vertical_pad;
	cout << "Enter the amount of horizontal spacing: ";
	cin >> horizontal_pad;

	// the number of rows and columns to write
	const int rows = vertical_pad*2 + 3;
	const string::size_type cols = greeting.size() + horizontal_pad*2+2;

	// write a blank line to separate the output from the input
	cout << endl;

	// write |rows| rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r){
		string::size_type c= 0;

		//invariant: we have written c characters so far in the current row
		while (c != cols){
			// is it time to write the greeting?
			if (r == vertical_pad + 1 && c == horizontal_pad + 1){
				cout << greeting;
				c += greeting.size();
			}
			else{
				// are we on the border?
				if (r == 0 || r == rows -1 || c == 0 || c == cols-1){
					cout << "*";
				}
				else{
					cout << " ";
				}
				++c;
			}
		}
		cout << endl;
	}


	return 0;
}
