/**
* database .cpp
*/
#include <iostream>
#include <string>
#include "database.h"
#include "vector.h"


namespace BRMALA003
{
using namespace std;

void addStudent(string name,string surname, string studentNumber, string classRecord)
{
    StudentRecord s;
    s.name = name;
    s.surname = surname;
    s.studentNumber = studentNumber;
    s.classRecord = classRecord;


}
void readDatabase(std::string file)
{
     cout << "Function queryDatabase() called " << endl;
}
void saveDatabase(std::string file)
{
     cout << "Function saveDatabase() called " << endl;
}
void displayStudent(std::string studentNumber)
{
   cout << "Function displayStudent() called " << endl;
}
float gradeStudent(std::string name,std::string surname)
{
    cout << "Function gradeStudent() called " << endl;
    return 0.0;
}
}

