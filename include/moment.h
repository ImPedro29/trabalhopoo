#ifndef MOMENT_H
#define MOMENT_H


class moment{
    private:
        int year;
        int mon;
        int day;
        int hour;
        int min;
    public:
        moment();
        moment(const bool& d);
        virtual ~moment();
        moment(const bool& d, const int& yearH, const int& monH, const int& dayH, const int& hourH, const int& minH);
        int getYear();
        int getMon();
        int getDay();
        int getHour();
        int getMin();

        //void reset(moment m);

        bool isValid(const int& yearH, const int& monH, const int& dayH, const int& hourH, const int& minH) const;

};

#endif // MOMENT_H
