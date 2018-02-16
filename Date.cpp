//
// Created by TerryC on 2018-02-15.
//

#include "Date.h"
#include <iostream>
using namespace std;

#include "Date.h"
//#include "debug.h"

Date::Date(void) : day(1), month(1), year(1970)
{
    cout << "Date: default ctor" << endl;
}

Date::~Date(void)
{
    cout << "Date: dtor" << endl;
}

Date::Date(const Date& d) : day(d.day), month(d.month), year(d.year)
{
    cout << "Date: copy ctor" << endl;
}

Date::Date(int m, int d, int y) : day(d), month(m), year(y)
{
    cout << "Date: 3-int ctor" << endl;
}

void Date::set(int m, int d, int y)
{
    day = d;
    month = m;
    year = y;
}

void Date::display(void)
{
    cout << month << '/';
    cout << day << '/';
    cout << year << endl;
}

void Date::increment(void)
{
    day++;
}

void Date::decrement(void)
{
    day--;
}
