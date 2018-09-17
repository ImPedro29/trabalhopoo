#include "moment.h"
#include <stdio.h>
#include <time.h>

moment::moment(){
    year = 0;
    mon = 0;
    day = 0;
    hour = 0;
    min = 0;
}

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

moment::moment(const bool& d){
    year = time(0);
    mon = time(1);
    day = time(2);
    hour = time(3);
    min = time(4);
}

moment::moment(const int& yearH = time(0), const int& monH = time(1), const int& dayH = time(2), const int& hourH = time(3), const int& minH = time(4)){
    if(isValid(yearH, monH, dayH, dayH, hourH)){
        year = yearH;
        mon = monH;
        day = dayH;
        hour = hourH;
        min = minH;
    }else{
        year = 0;
        mon = 0;
        day = 0;
        hour = 0;
        min = 0;
    }
}

moment::getYear(){
    return year;
}
moment::getMon(){
    return mon;
}
moment::getDay(){
    return day;
}
moment::getHour(){
    return hour;
}
moment::getMin(){
    return min;
}


bool moment::isValid(const int& yearH, const int& monH, const int& dayH, const int& hourH, const int& minH) const{
    bool bisexto = false;
    int months1[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int months2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(yearH%4 == 0 && yearH%400 == 0 && yearH%100 != 0){
        bisexto = true;
    }

    if(yearH > (118 + 1900) || yearH < 2000 || monH < 0 || monH > 11 || hourH < 0 || hourH > 59 || minH > 59 || minH < 0){
        return false;
    }

}


moment::~moment(void){

}
