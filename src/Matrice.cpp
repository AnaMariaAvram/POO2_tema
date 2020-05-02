#include "Matrice.h"
#include <fstream>
#include <cstdlib>
using namespace std;
Matrice::Matrice()
{
    NrLinii = 0;
    v = NULL;
    //ctor
}

Matrice::Matrice(int k, Vector x)
{
    NrLinii = k;
    v = new Vector[NrLinii];
    for (int i = 0; i < k; i++)
         v[i] = x;

}
Matrice::Matrice(const Matrice &tablou)
{
    NrLinii = tablou.NrLinii;
    v = new Vector[NrLinii];
    for(int i = 0; i < NrLinii; i++)
        v[i] = tablou.v[i];

}
Matrice& Matrice::operator=(const Matrice &tablou)
{
    delete [] v;
    this->NrLinii = tablou.NrLinii;
    this->v = new Vector [NrLinii];
    for (int i = 0; i < NrLinii; i++)
        this->v[i] = tablou.v[i];
    return *this;
}

istream &operator>>(istream &in, Matrice &tablou)
{
    delete [] tablou.v;
    in>>tablou.NrLinii;
    tablou.v = new Vector [tablou.NrLinii];
    for (int i = 0; i < tablou.NrLinii ; i++)
        in >> tablou.v[i];
    return in;
}
ostream &operator<<(ostream &out, Matrice &tablou)
{
    for(int i=0; i< tablou.NrLinii; i++)
        out << tablou.v[i] << endl;
    return out;
}
Matrice::~Matrice()
{
    NrLinii = 0;
    delete [] v;
    //dtor
}
