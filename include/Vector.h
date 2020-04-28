#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;
class Vector
{
    private:
        int dim;
        int *a;
    public:
        //Constuctor de initializare
        Vector();
        virtual ~Vector();
        Vector(int, int *);
        Vector(const Vector &);
         //supraincarcarea operatorilor << si >>
        friend istream &operator>>(istream &, Vector &);
        friend ostream &operator<<(ostream &, Vector &);
        //Constructor cu operatorul =
        Vector operator=(const Vector&);
        int Get_dimensiunevector()
        {
            return dim;
        }
        int GetElement(int poz)
        {
            return a[poz];
        }
};

#endif // VECTOR_H
