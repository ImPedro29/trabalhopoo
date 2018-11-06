#include "event.h"
#include <cstdlib>

event::event(const string& p_occurrence){
    date *dt = new date();
    endDate = *dt;
    eventID = rand() % 1000000;
    occurrence = p_occurrence;
}

event::event(const date& p_endDate, const string& p_occurrence){
    endDate = p_endDate;
    eventID = rand() % 1000000;
    occurrence = p_occurrence;
}

event::event(const date& p_startDate, const date& p_endDate, const string& p_occurrence){
    endDate = p_endDate;
    startDate = p_startDate;
    eventID = rand() % 1000000;
    occurrence = p_occurrence;
}

int event::getEventID(){
    return eventID;
}

void event::setStartDate(date p_startDate){
    startDate = p_startDate;
}

date event::getStartDate(){
    return startDate;
}

void event::setEndDate(date p_endDate){
    endDate = p_endDate;
}

date event::getEndDate(){
    return endDate;
}

void event::setOccurrence(string p_occurrence){
    occurrence = p_occurrence;
}

string event::getOccurrence(){
    return occurrence;
}
