#ifndef EVENT_H
#define EVENT_H
#include "date.h"

class event{
    private:
        int eventID;
        date startDate;
        date endDate;
        string occurrence;

    public:
        event(const string& p_occurrence);
        event(const date& p_endDate, const string& p_occurrence);
        event(const date& p_startDate, const date& p_endDate, const string& p_occurrence);

        int getEventID();

        date getStartDate();
        void setStartDate(date p_startDate);

        date getEndDate();
        void setEndDate(date p_endDate);

        string getOccurrence();
        void setOccurrence(string p_occurrence);

};

#endif // EVENT_H
