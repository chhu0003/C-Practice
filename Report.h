//
// Created by TerryC on 2018-02-15.
//

#ifndef PRACTICE_REPORT_H
#define PRACTICE_REPORT_H

#include "Time.h"
#include "Date.h"
#include "Document.h"

const int MAX_CHAR_SIZE=200;

class Report: public Document {
public:
    Report(void);
    ~Report(void);
    Report(const Report& r);
    Report(Date d, Time t, char *desc);

    virtual void display(void) const;
    void display_desc(void) const;
private:
    Date rep_date;
    Time rep_time;
    char rep_desc[MAX_CHAR_SIZE];
};
#endif //PRACTICE_REPORT_H
