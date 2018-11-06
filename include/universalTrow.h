#ifndef UNIVERSALTROW_H
#define UNIVERSALTROW_H
#include <stdexcept>
#include <vector>

using namespace std;

class universalTrow : public runtime_error{
    public:
        universalTrow() : runtime_error("Fatal Error");
        universalTrow(std::string msg):runtime_error(msg.c_str()){}

};

#endif // UNIVERSALTROW_H
