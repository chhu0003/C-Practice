//
// Created by TerryC on 2018-02-15.
//

#ifndef PRACTICE_DATE_H
#define PRACTICE_DATE_H

class Date {
public:
    Date(void);		// default ctor
    ~Date(void);	// dtor
    Date(const Date& d);
    Date(int m, int d, int y);

    void set(int m, int d, int y);
    void display(void) const ;
    void increment(void);
    void decrement(void);
private:
    int day;
    int month;
    int year;
};
#endif //PRACTICE_DATE_H
