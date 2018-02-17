//
// Created by TerryC on 2018-02-15.
//

#include <iostream>
using namespace std;

#include "ExternalBugreport.h"
//#include "debug.h"

ExternalBugreport::ExternalBugreport(void)
{
    cout << "ExternalBugreport: default ctor" << endl;
    company[0] = '\0';
    product[0] = '\0';
    stat = STATUS_LOGGED;
}

ExternalBugreport::~ExternalBugreport(void)
{
    cout << "ExternalBugreport: dtor" << endl;
}

ExternalBugreport::ExternalBugreport(const ExternalBugreport& ebr) :
        Bugreport(ebr), stat(ebr.stat)
{
    cout << "ExternalBugreport: copy ctor" << endl;
    strcpy(company, ebr.company);
    strcpy(product, ebr.product);
}

ExternalBugreport::ExternalBugreport(Date d, Time t, char *desc, int id,
                                     int sev, char *thecompany, char *theproduct, status thestatus) :
        Bugreport(d, t, desc, id, sev), stat(thestatus)
{
    cout << "ExternalBugreport: date time char * int int char * char * status ctor" << endl;
    strcpy(company, thecompany);
    strcpy(product, theproduct);
}

void ExternalBugreport::display(void) const
{
    cout << "Company: " << company << endl;
    cout << "Product: " << product << endl;
    cout << "Status: ";
    disp_status();
    Bugreport::display();
}

void ExternalBugreport::disp_status(void) const
{
    switch (stat) {
        case STATUS_LOGGED:
            cout << "Logged" << endl;
            break;
        case STATUS_COMPANY_INFORMED:
            cout << "Company has been informed" << endl;
            break;
        case STATUS_COMPANY_CONFIRMED:
            cout << "Company has confirm they have been informed" << endl;
            break;
        case STATUS_COMPANY_REPRODUCED:
            cout << "Company has reproduced" << endl;
            break;
        case STATUS_COMPANY_WONT_BE_FIXED:
            cout << "Company won't be fixing" << endl;
            break;
        case STATUS_FIXED_MAJOR_RELEASE:
            cout << "Company fixed, available next major release" << endl;
            break;
        case STATUS_FIXED_MINOR_RELEASE:
            cout << "Company fixed, available next minor release" << endl;
            break;
        case STATUS_FIX_IN_USE:
            cout << "Company fixed, we are currently using fixed version" << endl;
            break;
        default:
            cout << "Error, unknown status!" << endl;
            break;
    }
}

void ExternalBugreport::setStatus(status newstatus)
{
    stat = newstatus;
}