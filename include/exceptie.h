#ifndef EXCEPTIE_H
#define EXCEPTIE_H
#include <exception>
using namespace std;
class Exceptia: public exception
{
    private:
    const char* what_arg;
public:
    Exceptia(const char* what_arg) throw()
    {
        this->what_arg = what_arg;
    };
    ~Exceptia() throw() {};
    const char* what() const throw()
    {
        return this->what_arg;
    }
};

#endif // EXCEPTIE_H
