//
// Created by TerryC on 2018-02-15.
//

#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.h"
//#include "debug.h"

Time::Time(void) : hour(13), minute(12)
{
    cout << "Time: default ctor" << endl;
}

Time::~Time(void)
{
    cout << "Time: dtor" << endl;
}

Time::Time(int h, int m) : hour(h), minute(m)
{
    cout << "Time: two int ctor" << endl;
}

Time::Time(const Time& t) : hour(t.hour), minute(t.minute)
{
    cout << "Time: copy ctor" << endl;
}

void Time::set(int h, int m)
{
    hour = h;
    minute = m;
}

void Time::display(void)
{
    char c = cout.fill('0');
    cout << setw(2) << hour << ':';
    cout.width(2);
    cout << minute << endl;
    cout.fill(c);
}
