#ifndef MATRICE_H
#define MATRICE_H
#include "Vector.h"
#pragma once
using namespace std;
class Matrice
{
    protected:
        int NrLinii;
        Vector *v;
    public:
        Matrice();
        Matrice(int, Vector);
        Matrice(const Matrice &);
        //supraincarcarea operatorilor << si >>
        friend istream &operator>>(istream &, Matrice &);
        friend ostream &operator<<(ostream &, Matrice &);
        Matrice&operator=(const Matrice &);
        friend class Vector;
        virtual int pura(int i)=0;
        virtual ~Matrice();


};

#endif // MATRICE_H
