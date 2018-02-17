//
// Created by TerryC on 2018-02-15.
//

#ifndef PRACTICE_TIME_H
#define PRACTICE_TIME_H
class Time {
public:
    Time(void);
    ~Time(void);
    Time(int h, int m);
    Time(const Time& t);

    void set(int h, int m);
    void display(void) const;

private:
    int hour;
    int minute;
};
#endif //PRACTICE_TIME_H
