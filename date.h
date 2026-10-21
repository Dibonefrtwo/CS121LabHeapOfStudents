// date.h
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <string>

class Date{
 private:  
  std::string dateString; 
  int month;
  int day;
  int year;
 public:
  Date();
  void init(int month, int day, int year); 
  void printDate();
} // end class
#endif
