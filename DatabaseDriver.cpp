/**
* DatabaseDriver.cpp
* Author: Alan Berman
* 23/2/2015
*/
#include <string>
#include <iostream>
#include <fstream>
#include "database.cpp"

//Driver that displays the database menu
//User can add students to the database, create and view the database,
//as well as view a particular student and his/her grade
	using namespace std;
	int main(void)
	{
	char choice = 'c';
	//Flag to ensure database.txt not created more than once
	int created = 0;
	cout << "--------Student Database Menu--------"<<endl;
	while (true)
	{
		//Exit the menu if the user has chosen to quit
		if (choice=='q' || choice=='Q' )
		{
			break;
		}
		cout << "0: Add student" <<endl;
		cout << "1: View database" <<endl;
		cout << "2: Create the database text file" <<endl;
		cout << "3: Display student data" <<endl;
		cout << "4: Grade student" <<endl;
		cout << "q: Quit" <<endl;
		cout << "Enter a number (or q to quit) and press return..." <<endl;
		cin >> choice;
		switch (choice)
		{
			//Enter a student (and add his/her StudentRecord to the vector of StudentRecords)
			case '0':
			{
			cout << "Remember: Add all students BEFORE creating the database text file!" <<endl;
            string f,s,n,r;
            cout << "Enter student's first name:" <<endl;
            cin >> f;
            cout << "Enter student's surname:" <<endl;
            cin >> s;
            cout << "Enter student number in uppercase:" <<endl;
            cin >> n;
            cout << "Enter student's 4 class marks (separated by spaces):" <<endl;
            cin.ignore(); //Adapted from http://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs
			getline(cin,r);	
            BRMALA003::addStudent(f,s,n,r);
            cout << f <<" "<<s<<" ("<<n<<") with class record " <<r << " added to the database"<<endl;
			}
			break;
			//View the database (the contents of database.txt)
			case '1':
			{
			BRMALA003::readDatabase();
			}
			break;
			//Create database.txt (using the contents of the vector of StudentRecords)
			case '2':
			{
			if (created==1)
			{
				cout << "You already created the database!" << endl;
				break;
			}
			BRMALA003::saveDatabase();
			created = 1;
			}
			break;
			//View a particular student in the database
			case '3':
			{
			string f;
			 cout << "Enter the student's student number in uppercase:" <<endl;
			cin >> f;
			 BRMALA003::displayStudent(f);
			}
			break;
			//Calculate the average grade of a student
			case '4':
			{
			string h;
			 cout << "Enter the student's student number in uppercase:" <<endl;
			cin >> h;	
			BRMALA003::gradeStudent(h);
			}
			break;

			case 'q':
			break;

			case 'Q':
			break;

		}
	}
    return 0;
	}


