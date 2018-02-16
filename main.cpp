#include <iostream>
using namespace std;


#include "Date.h"
#include "Time.h"
#include "Report.h"
#include "Bugreport.h"
#include "ExternalBugreport.h"

void show_rep(Report *rpt);

void show_rep(Report *rpt)
{
    cout << "********************" << endl;
    rpt->display();
    cout << "********************" << endl;
}

int main() {
    Date today(10, 15, 1998);
    Time t(19, 50);
    Bugreport bug_a(today, t, "OK button... isn't.", 1, 1);
    bug_a.display();

    Report rep;
    rep.display();
    rep = bug_a;
    rep.display();

    Date today2(10, 13, 1998);
    Time t2(3, 35);
    Report status(today2, t2, "Everything is just peachy.");
    status.display();

    Bugreport bug_b;
    bug_b.display();

#if 0 // <-- Change that to a 1 to see the compile error
    bug_b = status; // Illegal
	bug_b.display();
#endif // 0

    ExternalBugreport ebr(today, t, "The OS I'm running is broken.", 2, 1,
                          "Somebody, Inc.", "Something '95", ExternalBugreport::STATUS_LOGGED);
    //ebr.display();

    Report *rpt[3];
    rpt[0] = &bug_a;
    rpt[1] = &status;
    rpt[2] = &ebr;
    for (int i = 0; i < 3; i++)
        show_rep(rpt[i]);


    return 0;
}