/**
* database.h
* Author: Alan Berman
* 23/2/2015
*/
 #ifndef DATABASE_H
#define DATABASE_H
#include <string>
//using namespace std;



namespace BRMALA003 {
using namespace std;
void addStudent(string name,string surname, string studentNumber, string classRecord);
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
