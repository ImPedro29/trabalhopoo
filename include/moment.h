#ifndef MOMENT_H
#define MOMENT_H
#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

class moment{
    private:
        int year;
        int mon;
        int day;
        int hour;
        int min;
    public:
        moment();
        virtual ~moment();
        moment(const int& yearH, const int& monH, const int& dayH, const int& hourH, const int& minH);
        int getYear();
        int getMon();
        int getDay();
        int getHour();
        int getMin();

        void reset(void);

        bool isValid(int y, int m, int d, int h, int mi);

};

#endif // MOMENT_H
