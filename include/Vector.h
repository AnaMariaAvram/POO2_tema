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
        Vector();
        virtual ~Vector();
        Vector(int, int *);
        Vector(const Vector &);
        friend istream &operator>>(istream &, Vector &);
        friend ostream &operator<<(ostream &, Vector &);
        Vector operator=(const Vector&);
        int Get_Dimensiune()
        {
            return dim;
        }
        int GetElement(int poz)
        {
            return a[poz];
        }
};

#endif // VECTOR_H
