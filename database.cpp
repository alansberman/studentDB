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

void addStudent(string name,string surname)
{
    std::cout << "Added student " << name << surname << std::endl;
}
void readDatabase(std::string file)
{
     std::cout << "Read database" << std::endl;
}
void saveDatabase(std::string file)
{
     std::cout << "Saved database" << std::endl;
}
void displayStudent(std::string name,std::string surname)
{
    std::cout << "Here's student" << name << surname << std::endl;
}
float gradeStudent(std::string name,std::string surname)
{
    std::cout << "Here's student" << name << surname << "s grade ... 0" << std::endl;
    return 0.0;
}
}
int main(void)
{
    std::string f;
    f="hello";
    std::string l;
    l="ahoy";
    addStudent(f,l);
    return 0;
}
