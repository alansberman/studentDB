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
			string g ="hello";
			string e="ahoy";		
			addStudent(g,e);
			}
			break;
			
			case '1':
			{
			string a ="hello";
			
			readDatabase(a);
			}
			break;
			
			case '2':
			{
			string c="hello";
			saveDatabase(c);
			}
			break;
			
			case '3':
			{
			string d="hello";
			
			string f="ahoy";
			displayStudent(f,d);
			}
			break;
			
			case '4':
			{
			string h="hello";
			string i="ahoy";
			gradeStudent(h,i);
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



