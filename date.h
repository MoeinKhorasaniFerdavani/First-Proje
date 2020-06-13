#ifndef DATE_H
#define DATE_H

#include <time.h>
#include <iostream>
#include <string>

using namespace  std;

class Date
{

    int year=2020;
    int month=1;
    int day=1;
    int hour=0;
    int minute=0;
   time_t now=0;
public:


   int getYear()const{return this->year;}
   int getMonth()const{return this->month;}
   int getDay()const{return this->day;}
   int getHour()const{return this->hour;}
   int getMinute()const{return this->minute;}


   void setYear(int year);
 void setMonth(int month);
 void setDay(int day);
 void setHour(int hour);
 void setMinute(int minute);


    Date(int year=2020,int month=1,int day=1,int hour=0,int minute=0);
     void goToCurrentDate();


   const char* toString();



};

#endif // DATE_H
