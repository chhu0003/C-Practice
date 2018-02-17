//
// Created by TerryC on 2018-02-15.
//
#include <iostream>
using namespace std;
#include "Report.h"

//#include "debug.h"

Report::Report(void)
{
    cout << "Report: default ctor" << endl;
    rep_desc[0] = '\0';
}

Report::~Report(void)
{
    cout << "Report: dtor" << endl;
}

Report::Report(const Report& r) : rep_date(r.rep_date), rep_time(r.rep_time)
{
    cout << "Report: copy ctor" << endl;
    strcpy(rep_desc, r.rep_desc);
}

Report::Report(Date d, Time t, char *desc) : rep_date(d), rep_time(t)
{
    cout << "Report: date time char * ctor" << endl;
    strcpy(rep_desc, desc);
}

void Report::display(void) const
{
    cout << "Report size: " << sizeof(Report) << endl;
    cout << "Date: ";
    rep_date.display();
    cout << "Time: ";
    rep_time.display();
    cout << "Description: ";
    display_desc();
}

void Report::display_desc(void) const
{
    cout << rep_desc << endl;
}
