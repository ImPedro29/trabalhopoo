#ifndef UNIVERSALEXCEPTION_H
#define UNIVERSALEXCEPTION_H
#include <stdexcept>
#include <vector>

using namespace std;

class universalException : public runtime_error{
    private:
        static vector<string> except;

    public:
        universalException():runtime_error("Fatal Error"){};
        universalException(string id, string msg):runtime_error(("Erro: " + id + "\nMensagem: " + msg).c_str()){

        }

};

#endif // UNIVERSALEXCEPTION_H
