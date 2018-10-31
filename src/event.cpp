#include "event.h"
#include <cstdlib>

event::event(void){
    date *dt = new date();
    endDate = *dt;
    eventID = 1 + rand() % 1000000;
}

event::event(const date& p_endDate){
    endDate = p_endDate;
    eventID = 1 + rand() % 1000000;
}

event::event(const date& p_startDate, const date& p_endDate){
    endDate = p_endDate;
    startDate = p_startDate;
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
