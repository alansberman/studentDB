/**
* database.cpp
* Author: Alan Berman
* 23/2/2015
*/
#include <iostream>
#include <fstream>
#include <string>
#include "database.h"
#include "vector.h"
#include <sstream>
//Contains the definitions of the functions in database.h
namespace BRMALA003
{
using namespace std;
//Makes a StudentRecord from the inputted information and adds the record into the vector
void addStudent(string name,string surname, string studentNumber, string classRecord)
{
    StudentRecord s;
    s.name = name;
    s.surname = surname;
    s.studentNumber = studentNumber;
    s.classRecord = classRecord;
    int count=0;
    //Adapted from http://stackoverflow.com/questions/409348/iteration-over-vector-in-c
	for (i=v.begin(); i != v.end(); ++i) 
	{
				//cout << i->name<<endl;
				cout << count << endl;
				//Check if student already in database
					if (i->studentNumber==s.studentNumber)
					{
						cout << "Updating student record..." << endl;
						v.erase(v.begin()+count);
						break;	
					}
					count++;
	}
    v.push_back(s);
	cout << name <<" "<<surname<<" ("<<studentNumber<<") with class record " <<classRecord << " added to the database."<<endl;
}
//Prints out the database (database.txt's contents)
void readDatabase()
{
     string databaseFile = "database.txt";
     string entry;
     ifstream i(databaseFile.c_str());
     if(!i)
		{ cout << "Couldn't open database."  << endl; 
		  return;
		}
	cout << "Student Database: " << endl;
	while (!i.eof())
	{
		getline(i,entry);
		cout << entry << endl;
	}
}
//Creates/updates a text file (database.txt) containing all the StudentRecords of the vector
void saveDatabase()
{
	ofstream outFile;
	outFile.open("database.txt");
	outFile << "First Name | Surname | Student Number | Class Record" << endl;
   
   if (outFile.is_open())
			{
				//Adapted from http://stackoverflow.com/questions/409348/iteration-over-vector-in-c
				for (i=v.begin(); i != v.end(); i++) {
				{
					
					//Add the fields of each vector to the text file
					outFile << i->name<<", "<<i->surname<<", "<<i->studentNumber<<", "<<i->classRecord << endl;			
				}
			}
}
	outFile.close();
	cout << "Done!" <<endl;
}
//Retrieves a student's StudentRecord fields (if present in the database text file)
void displayStudent(std::string studentNumber)
{
	int found = 0;
   for (i=v.begin(); i != v.end(); ++i) 
	{
				
					if (i->studentNumber==studentNumber)
					{
						found=1;
						cout <<"Student "<<studentNumber<<": "<<i->name<<", "<<i->surname<<", "<<i->studentNumber<<", "<<i->classRecord << endl;
						break;
					}
					
	}
	if (found==0)
	{
		cout <<"Student "<<studentNumber<<" not found in the database."<<endl;
	}
	
}
//Calculates the average grade of a student
void gradeStudent(std::string studentNumber)
{
	int a,total,count,average;
	count = 0;
	
	int found = 0;
   for (i=v.begin(); i != v.end(); ++i) 
	{
				
					if (i->studentNumber==studentNumber)
					{
						found=1;
						//Adapted from http://www.cplusplus.com/forum/beginner/38599/
						istringstream ss(i->classRecord);
						//Extract each mark and place them a, then update total
						while (!ss.eof())
						{
						ss >> a; 
						total+=a;
						count++;
						}
						average = (total)/count;
						cout << studentNumber <<"'s average grade is "<<average <<"%."<<endl;
						break;
					}
					
	}
	if (found==0)
	{
		cout <<"Student "<<studentNumber<<" not found in the database."<<endl;
	}
	
}
}


