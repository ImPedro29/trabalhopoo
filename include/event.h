#ifndef EVENT_H
#define EVENT_H
#include "date.h"

class event{
    private:
        int eventID;
        date startDate;
        date endDate;

    public:
        event();
        event(const date& p_endDate);
        event(const date& p_startDate, const date& p_endDate);

        int getEventID();

        date getStartDate();
        void setStartDate(date p_startDate);

        date getEndDate();
        void setEndDate(date p_endDate);

};

#endif // EVENT_H
