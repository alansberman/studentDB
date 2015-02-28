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
    v.push_back(s);

}
//Prints out the database (database.txt's contents)
void readDatabase()
{
     string databaseFile = "database.txt";
     string entry;
     ifstream i(databaseFile.c_str());
     if(!i)
		{ cout << "Couldn't open database. Have you entered students into the database? "  << endl; 
		  return;
		}
	cout << "Student Database: " << endl;
	while (!i.eof())
	{
		getline(i,entry);
		cout << entry << endl;
	}
}
//Creates a text file (database.txt) containing all the StudentRecords of the vector
void saveDatabase()
{
	cout <<"Creating database... ";
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
	cout << "done!" <<endl;
}
//Retrieves a student's StudentRecord fields (if present in the database text file)
void displayStudent(std::string studentNumber)
{
    string filename = "database.txt";
	string line;
	ifstream in(filename.c_str());
	int position,notfound,foundStudent;
	notfound=-1;
	foundStudent=0;
	if(!in)
		{ cout << "Couldn't open database "  << endl; }
	//Search for the student number in the database text file
	while (!in.eof())
{
	getline(in,line);
	position=line.find(studentNumber,0);
	//If the student is found
	if (position!=notfound)
	{
			foundStudent=1;
			cout <<studentNumber <<": "<< line << endl;
	}
}
	if (foundStudent==0)
	{
	cout << studentNumber << " not found in database" << endl;
	}
}
//Calculates the average grade of a student
void gradeStudent(std::string studentNumber)
{
	string file = "database.txt";
	string l;
	int location;
	string sub;
	float average;
	int a,b,c,d,startOfMarks,flag;
	flag=0;
	ifstream ins(file.c_str());
	int notFound=-1;
	if(!ins)
		{ cout << "Couldn't open database " << file << endl; }
	//Search for the student in the database text file
	while (!ins.eof())
{
	getline(ins,l);
	location=l.find(studentNumber,0);
	
	//If the student is found
	if (location!=notFound)
	{
			flag = 1;
			//Isolate the grades of the student and make it its own string
			startOfMarks= l.rfind(", ");
			sub=l.substr(startOfMarks+2);
			//Adapted from http://www.cplusplus.com/forum/beginner/38599/
			stringstream ss(sub);
			//Extract each mark and place them in a,b,c,d
			ss >> a >> b >> c >> d; 
			average = (a+b+c+d)/4;
			cout << studentNumber <<"'s average grade is "<<average <<"%"<<endl;		
	}
}
	if (flag==0)
	{
	cout << studentNumber <<"not found in database" << endl;
	}
}
}


