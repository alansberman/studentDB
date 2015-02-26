/**
* database.h (header file)
* Author: Alan Berman
* 23/2/2015
*/
 #ifndef DATABASE_H.h
#define DATABASE_H.h
#include <string>


namespace BRMALA003 {

void addStudent(string name,string surname);
void readDatabase(string file);
void saveDatabase(string file);
void displayStudent(string name,string surname);
float gradeStudent(string name, string surname);
struct StudentRecord
{
 string name;
 string surname;
 string studentNumber;
 string classRecord;
};
}
#endif // DATABASE_H
