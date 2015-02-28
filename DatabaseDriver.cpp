/**
* DatabaseDriver.cpp
*/
#include <string>
#include <iostream>
#include "database.cpp"
#include "database.h"
#include "vector.h"
#include <vector>
	using namespace std;
	int main(void)
	{

	char choice = 'c';
	while (true)
	{
		if (choice=='q' || choice=='Q' )
		{
			break;
		}
		cout << "0: Add student" <<endl;
		cout << "1: Read database" <<endl;
		cout << "2: Save database" <<endl;
		cout << "3: Display student data" <<endl;
		cout << "4: Grade student" <<endl;
		cout << "q: Quit" <<endl;
		cout << "Enter a number (or q to quit) and press return..." <<endl;
		cin >> choice;
		switch (choice)
		{
			case '0':
			{
            string f,s,n,r;
            vector<string> grades;
            //std::istringstream is;
            cout << "Enter student's first name" <<endl;
            cin >> f;
            cout << "Enter student's surname" <<endl;
            cin >> s;
            cout << "Enter student's student number" <<endl;
            cin >> n;
            cout << "Enter student's class records (marks separated by spaces" <<endl;
           //while (!cin.eof())
            //{
             //cin >> r >> ws;
	    getline (cin,r);	
             grades.push_back(r);
            //}
            BRMALA003::addStudent(f,s,n,r);
            cout << f <<" "<<s<<" ("<<n<<") with class record " <<r << " added to the database"<<endl;

			}
			break;

			case '1':
			{
			string a ="hello";

			 BRMALA003::readDatabase(a);
			}
			break;

			case '2':
			{
			string c="hello";
			 BRMALA003::saveDatabase(c);
			}
			break;

			case '3':
			{
			string d="hello";

			string f="ahoy";
			 BRMALA003::displayStudent(f);
			}
			break;

			case '4':
			{
			string h="hello";
			string i="ahoy";
			 BRMALA003::gradeStudent(h,i);
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



