//Write a function that gets an integer from the user. Do all appropriate error checking.

#include <iostream>

using namespace std;

int GetIntergerFromUser();

int main() {
	int number = GetIntergerFromUser();
	cout << "The number we got was: " << number << endl;

	return 0;
}

int GetIntergerFromUser() {
	cout << "Function, Dysfunction\n" << endl;

	bool failure;
	int number;
	const int Ignore_Chars = 256;

	do {
		failure = false;

		cout << "Please enter an interger: ";
		cin >> number;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(Ignore_Chars, '\n');
			cout << "Input error! Please try again." << endl;
			failure = true;
		}

	} while (failure);

	return number;
}