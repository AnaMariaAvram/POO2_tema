#include "Vector.h"
#include <fstream>
#include <cstdlib>
using namespace std;


Vector::Vector()
{
    dim = 0;
    a = NULL;
     //ctor
}

Vector::Vector(int n, int *v)
{
    dim = n;
    a = new int[n];
    for (int i = 0; i < n; i++)
         a[i] = v[i];

}

Vector::Vector(const Vector &tablou)//constructor de copiere prin care copiez un obiect peste altul
{
    a = new int[tablou.dim];
    dim = tablou.dim;
    for(int i = 0; i< tablou.dim; i++)
        a[i] = tablou.a[i];
}
Vector Vector::operator=(const Vector &tablou)
{
    delete [] a;
    this->dim = tablou.dim;
    this->a = new int [tablou.dim];
    for (int i = 0; i < dim; i++)
    {
        this->a[i] = tablou.a[i];
    }
    return *this;
}

istream &operator>>(istream &in, Vector &tablou)
{
    in >> tablou.dim;
    tablou.a = new int [tablou.dim];
    for (int i = 0; i < tablou.dim ; i++)
    {
        in >> tablou.a[i];
    }
    return in;
}
ostream &operator<<(ostream &out,Vector &tablou)
{
    for(int i=0; i<tablou.dim; i++)
        out<<tablou.a[i]<<" ";
    return out;
}
Vector::~Vector()
{
    delete [] a;
    dim = 0;
    //dtor
}
