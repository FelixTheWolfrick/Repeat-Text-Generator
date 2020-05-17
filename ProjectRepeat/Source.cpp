/* ***  Author: Felix Abbott
	 *  Socials: 
	 *    - YouTube/Instagram/Twitter: @FelixTheWolfrick
	 *    - Etsy: www.etsy.com/shop/FelixTheWolfrick
	 *    - Art Insta: @FelixTheWolfrickArt
	 *    - itch.io: www.felixthewolfrick.itch.io
	 *    - GameJolt: www.gamejolt.com/@FelixTheWolfrick
	 *    - GitHub: www.github.com/FelixTheWolfrick
	 *
	 *  Description:
	 *      This program is designed for the user to input a word/phrase that they want
	 *  saved into the file XX nhumber of times. Timer System made by Anthony Blake.
	 *  
	 *  Ex.
	 *    Word to Repeat = adios
	 *    Repeat XX Times = 5
	 *    Text File Output = adios adios adios adios adios
	 *
	 *  Certification of Authenticity:
	 *     I certify that this assignment is entirely my own work.
	 **********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include "timerSystem.h"

using namespace std;

int main()
{
	//Variables
	string repeatWord, fileName, getlineTrash;
	int repeatValue;
	bool validNum = false;
	ofstream textFile;
	TimerSystem timer;

	//Welcome
	cout << "----TEXT REPEAT PROGRAM----" << endl;
	cout << endl;

	//Get Word/Phrase
	cout << "What word/phrase do you want repeated? " << endl;
	getline(cin, repeatWord);
	repeatWord = repeatWord + " ";
	cout << endl;

	//Get Repeat Value
	cout << "How many times do you want " << repeatWord << "stored in the text file? " << endl;
	cin >> repeatValue;
	cout << endl;

	//Get File Name
	cout << "Enter File Name: " << endl;
	getline(cin, getlineTrash);
	getline(cin, fileName);
	fileName = fileName + ".txt";
	cout << endl;

	//Open File(s)
	textFile.open(fileName);

	//Store Word in Text File
	timer.startClock();
	cout << "STORING TEXT INTO FILE..." << endl;
	cout << endl;
	for (int i = 0; i < repeatValue; i++)
	{
		textFile << repeatWord;
	}

	//Print Time Results
	cout << "TEXT FILE COMPLETE" << endl;
	cout << endl;

	if (repeatValue > 1)
	{
		cout << "Total time to store " << repeatWord << repeatValue << " times is: " << timer.getTime() << " seconds." << endl;
	}
	else
	{
		cout << "Total time to store " << repeatWord << repeatValue << " time is: " << timer.getTime() << " seconds." << endl;
	}
	cout << endl;

	//End System
	system("pause");
	return 0;
}