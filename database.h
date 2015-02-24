/**
* .h file
*/
 #ifndef DATABASE_H.h
#define DATABASE_H.h
#include <string>
//using namespace std;



namespace BRMALA003 {
using namespace std;
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
