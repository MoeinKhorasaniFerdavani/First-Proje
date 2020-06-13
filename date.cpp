#include "date.h"

void Date:: setYear(int year)
{
    if(year<=0)
        return;
   else if(year<100)
    {
        year+=2000;
        this->year=year;
        return;
    }
    else
    {
        this->year=year;
        return;
    }
}


void Date::setMonth(int month)
{
    if(month<12 && month>0)
        this->month=month;
    return;
}

void Date:: setDay(int day)
{
    if(day>0)
        this->day=day;
    return;
}

void Date:: setHour(int hour)
{
    if(hour<24&& hour>=0)
        this->hour=hour;
    return;
}

void Date::setMinute(int minute)
{
    if(minute>=0 && minute<60)
        this->minute=minute;
}


Date::Date(int year,int month,int day,int hour,int minute)

{
   this->setYear(year);
    this->setMonth(month);
     this->setDay(day);
     this->setHour(hour);
     this->setMinute(minute);

}

void Date:: goToCurrentDate()
{
    this->year=localtime(& now)->tm_year;
     this->month=localtime(& now)->tm_mon;
     this->day=localtime(& now)->tm_mday;
     this->hour=localtime(& now)->tm_hour;
     this->minute=localtime(& now)->tm_min;

}

const char* Date:: toString()
{
    char date [100];
    sprintf(date,"date:\t%d/%d/%d\ttime:\t%d/%d",this->year,this->month,this->day,  this->hour,this->minute);

    return date;

}


