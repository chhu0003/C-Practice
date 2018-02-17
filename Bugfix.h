//
// Created by TerryC on 2018-02-16.
//

#ifndef PRACTICE_BUGFIX_H
#define PRACTICE_BUGFIX_H

#include "Date.h"
#include "Bugreport.h"
const int MAX_NAME_SIZE = 100;

class Bugfix: public Document  {
private:
    Date fix_date;
    char author[MAX_NAME_SIZE];
    Bugreport *thebug;
    Bugfix(void); //ctor
public:
    ~Bugfix(void); //dtor
    Bugfix(const Bugfix &bf); //copy ctor
    Bugfix(Date d, char *auth, Bugreport *tb);

    virtual void display(void) const;
};
#endif //PRACTICE_BUGFIX_H
