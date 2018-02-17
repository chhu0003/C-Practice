//
// Created by TerryC on 2018-02-15.
//

#ifndef PRACTICE_EXTERNALBUGREPORT_H
#define PRACTICE_EXTERNALBUGREPORT_H
#include "Bugreport.h"

class ExternalBugreport : public Bugreport
{
public:
    enum status {
        STATUS_LOGGED = 0,
        STATUS_COMPANY_INFORMED,
        STATUS_COMPANY_CONFIRMED,
        STATUS_COMPANY_REPRODUCED,
        STATUS_COMPANY_WONT_BE_FIXED,
        STATUS_FIXED_MAJOR_RELEASE,
        STATUS_FIXED_MINOR_RELEASE,
        STATUS_FIX_IN_USE
    };

public:
    ExternalBugreport(void);
    ~ExternalBugreport(void);
    ExternalBugreport(const ExternalBugreport& ebr);
    ExternalBugreport(Date d, Time t, char *desc, int id, int sev,
                      char *thecompany, char *theproduct, status thestatus);

    virtual void display(void) const;
    void disp_status(void) const;

    void setStatus(status newstatus);

private:
    char company[MAX_CHAR_SIZE];
    char product[MAX_CHAR_SIZE];
    status stat;
};

#endif //PRACTICE_EXTERNALBUGREPORT_H
