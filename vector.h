/**
* vector .h
* Author: Alan Berman
* 23/2/2015
*/

//Creates the vector of student records and initializes an iterator
#ifndef VECTOR_H
#define VECTOR_H
#include <vector>
namespace BRMALA003
{
   std::vector<StudentRecord> v;
   typedef std::vector<StudentRecord>::const_iterator it;
   it i;
}
#endif // VECTOR_H
