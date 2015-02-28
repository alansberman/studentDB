/**
* database.h
* Author: Alan Berman
* 23/2/2015
*/
#ifndef DATABASE_H
#define DATABASE_H
#include <string>
//Header file with declarations of the functions of the database menu
namespace BRMALA003 {
using namespace std;
void addStudent(string name,string surname, string studentNumber, string classRecord);
void readDatabase();
void saveDatabase();
void displayStudent(string studentNumber);
void gradeStudent(string studentNumber);
//The student record struct, instances of which are placed in a vector
struct StudentRecord
{
 string name;
 string surname;
 string studentNumber;
 string classRecord;
};
}
#endif // DATABASE_H
