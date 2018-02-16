//
// Created by TerryC on 2018-02-15.
//

#include <iostream>
using namespace std;

#include "Bugreport.h"

Bugreport::Bugreport(void) : bug_id(0), severity(0)
{
    cout << "Bugreport: default ctor" << endl;
}

Bugreport::~Bugreport(void)
{
    cout << "Bugreport: dtor" << endl;
}

Bugreport::Bugreport(const Bugreport& br) : Report(br), bug_id(br.bug_id),
                                            severity(br.severity)
{
    cout << "Bugreport: copy ctor" << endl;
}

Bugreport::Bugreport(Date d, Time t, char *desc, int id, int sev) :
        Report(d, t, desc), bug_id(id), severity(sev)
{
    cout << "Bugreport: date time char * int int ctor" << endl;
}

void Bugreport::display(void)
{
    disp_id();
    cout << "Severity: " << severity << endl;
    Report::display();
}

void Bugreport::disp_id(void)
{
    cout << "ID: " << bug_id << endl;
}
