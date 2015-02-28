/**
* vector .h
*/
#ifndef VECTOR_H
#define VECTOR_H
#include <vector>
namespace BRMALA003
{
   std::vector<StudentRecord> v;
   typedef std::vector<StudentRecord>::const_iterator it;
   it i = v.begin();

   void addRecord (StudentRecord)
   {

   }
}
#endif // VECTOR_H
