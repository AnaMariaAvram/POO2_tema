#ifndef MATRICE_OARECARE_H
#define MATRICE_OARECARE_H
#include "Matrice.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#pragma once

using namespace std;

class Matrice_Oarecare: public Matrice
{
private:
public:
    Matrice_Oarecare();
    void Afis_Sum();
    virtual ~Matrice_Oarecare()=default;
    Matrice_Oarecare(int, Vector);
    Matrice_Oarecare(const Matrice_Oarecare &);
    /// friend istream &operator>>(istream &, Matrice_Oarecare &);
    /// friend ostream &operator<<(ostream &, Matrice_Oarecare &);
    Matrice_Oarecare& operator=(const Matrice_Oarecare &ob)
    {
        if (this != &ob)
            this->Matrice::operator=(ob);
        return *this;
    }
};


#endif // MATRICE_OARECARE_H
