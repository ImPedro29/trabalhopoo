#ifndef UNIVERSALERROR_H
#define UNIVERSALERROR_H


class universalError{
    public:
        universalTrow() : runtime_error("Fatal Error");
        universalTrow(std::string msg):runtime_error(msg.c_str()){}
};

#endif // UNIVERSALERROR_H
