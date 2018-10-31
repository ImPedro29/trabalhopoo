#include "date.h"
#include <string>
#include <iostream>

using namespace std;

int time(int x){
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    if(x == 0) return timeinfo->tm_year + 1900;
    else if(x == 1) return timeinfo->tm_mon + 1;
    else if(x == 2) return timeinfo->tm_mday;
    else if(x == 3) return timeinfo->tm_hour;
    else if(x == 4) return timeinfo->tm_min;
}

int now_year = time(0);
int now_mon = time(1);
int now_day = time(2);
int now_hour = time(3);
int now_min = time(4);

date::date(void){
    year = now_year;
    mon = now_mon;
    day = now_day;
    hour = now_hour;
    min = now_min;
}

void date::reset(){
    year = time(0);
    mon = time(1);
    day = time(2);
    hour = time(3);
    min = time(4);
}

date::date(const int& yearH = 2000, const int& monH = 0, const int& dayH = 0, const int& hourH = 0, const int& minH = 0){
    if(isValid(yearH, monH, dayH, hourH, minH)){
        year = yearH;
        mon = monH;
        day = dayH;
        hour = hourH;
        min = minH;
    }else{
        delete this;
        return;
    }
}

date::getYear(){
    return year;
}
date::getMon(){
    return mon;
}
date::getDay(){
    return day;
}
date::getHour(){
    return hour;
}
date::getMin(){
    return min;
}

bool date::isValid(int y, int m, int d,int h, int mi){
    int months1[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Bissexto
    int months2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // N�o bissexto

    if(y%4 == 0 && y%400 == 0 && y%100 != 0){
        if(d > months1[m]){
            return false;
        }
    }else if(d > months2[m]){
        return false;
    }else if(m < 0 || m > 11 || h < 0 || h > 59 || mi > 59 || mi < 0){
        return false;
    }

    return true;

}

date::~date(void){
}
