//
// Created by TerryC on 2018-02-15.
//

#ifndef PRACTICE_REPORT_H
#define PRACTICE_REPORT_H

#include "Time.h"
#include "Date.h"

#define MAX_CHAR_SIZE 200

class Report {
public:
    Report(void);
    ~Report(void);
    Report(const Report& r);
    Report(Date d, Time t, char *desc);

    virtual void display(void);
    void display_desc(void);
private:
    Date rep_date;
    Time rep_time;
    char rep_desc[MAX_CHAR_SIZE];
};
#endif //PRACTICE_REPORT_H
