//
// Created by TerryC on 2018-02-16.
//

#include <iostream>
using namespace std;

#include "Bugfix.h"


Bugfix::~Bugfix(void) {
    cout << "Bugfix: dtor"  << endl;
}

Bugfix::Bugfix(const Bugfix &bf) {
    cout << "Bugfix: copy ctor" << endl;
    strcpy(author, bf.author);
}

Bugfix::Bugfix(Date d, char *auth, Bugreport *tb): fix_date(d),
        thebug(tb)
{
    cout << "Bugfix: date char * Bugreport * ctor" << endl;
    strcpy(author, auth);
}

void Bugfix::display(void) const{
    cout<< "Bug ";
    thebug -> disp_id();
    cout << "Bug fixed: ";
    fix_date.display();
    cout << "Fixed by: " << author << endl;
}
