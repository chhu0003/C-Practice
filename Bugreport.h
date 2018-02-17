//
// Created by TerryC on 2018-02-15.
//

#ifndef PRACTICE_BUGREPORT_H
#define PRACTICE_BUGREPORT_H
#include "Report.h"

class Bugreport : public Report {
public:
    Bugreport(void);
    ~Bugreport(void);
    Bugreport(const Bugreport& br);
    Bugreport(Date d, Time t, char *desc, int id, int sev);

    virtual void display(void) const;
    void disp_id(void) const;
private:
    int bug_id;
    int severity;
};
#endif //PRACTICE_BUGREPORT_H
