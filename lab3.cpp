/**
*  @file lab3.cpp
*  @author Jimmy Chan
*  @version CS A257 Lab 3
*/


#include <iostream>
#include <string>
#include <limits>
#include <fstream>

#include "Dictionary.h"

using namespace std;

int main(){

	// Declare and Initialize Dictionary object
	Dictionary dict("nounlist.txt", "verblist.txt", "adverblist.txt", "adjectivelist.txt", "prepositionlist.txt", "articlelist.txt");

	// Title
	cout << "Random Sentence Generator" << endl;

	// Purpose
	cout << "-----------------------------------------------------" << endl;
	cout << "This program will generate English sentences that are";
	cout << endl;
	cout << "grammatically correct. It can also generate sentences ";
	cout << endl;
	cout << "using a noun and/or verb that the user provides." << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << endl;

	do {
		// Menu
		cout << "Choose an option:" << endl;
		cout << "1. Generate Random Sentence" << endl;
		cout << "2. Generate Random Sentence Using Specific Words" << endl;
		cout << "3. Quit" << endl;

		int choice;
		while (!(cin >> choice) || choice < 1 || choice > 3)
		{
			cout << "Invalid number. Enter a number between 1 and 3." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		cout << endl;

		switch (choice) {

		// Generate random sentence
		case 1:
		{
			cout << dict.getNP() + " " + dict.getVP() << endl;
			cout << endl;
		}
			break;

		// Generate sentence with specified noun and/or verb
		case 2:
		{
			cin.ignore();

			int nounCount;
			while ((cout << "How many nouns? (0-1): ")
				&& (!(cin >> nounCount) || nounCount < 0 || nounCount > 1))
			{
				cout << "Invalid number. Enter 0 or 1." << endl;
				cout << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}

			int verbCount;
			while ((cout << "How many verbs? (0-1): ")
				&& (!(cin >> verbCount) || verbCount < 0 || verbCount > 1))
			{
				cout << "Invalid number. Enter 0 or 1." << endl;
				cout << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}

			string nouns;
			if (nounCount == 1) {
				cout << "Enter a noun: ";
				cin >> nouns;
			}

			string verbs;
			if (verbCount == 1) {
				cout << "Enter a verb: ";
				cin >> verbs;
			}

			cout << endl;

			if (nounCount == 1) {
				cout << dict.getNP(nouns) + " ";
			}
			else {
				cout << dict.getNP() + " ";
			}

			if (verbCount == 1) {
				cout << dict.getVP(verbs) << endl;
			}
			else {
				cout << dict.getVP() << endl;
			}
			cout << endl;
		}
		break;

		// Quit
		case 3:
		{
			system("Pause");
			return 0;
		}

		}

	} while (true);
	


	cout << endl;
	system("Pause");
}