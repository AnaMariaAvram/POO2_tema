#ifndef EXCEPTIE_H
#define EXCEPTIE_H
#include <exception>
using namespace std;
class exceptie: public exception
{
    private:
    const char* what_arg;
public:
    exceptie(const char* what_arg) throw()
    {
        this->what_arg = what_arg;
    };
    ~exceptie() throw() {};
    const char* what() const throw()
    {
        return this->what_arg;
    }
};

#endif // EXCEPTIE_H
