#ifndef MATRICE_PATRATICA_H
#define MATRICE_PATRATICA_H
#include "Matrice.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#pragma once
using namespace std;

class Matrice_Patratica: public Matrice
{
    private:
    public:
        Matrice_Patratica();
        void get_sum();
        virtual ~Matrice_Patratica();
        Matrice_Patratica(int, Vector);
        Matrice_Patratica(const Matrice_Patratica &);
        Matrice_Patratica& operator=(const Matrice_Patratica &ob)
        {
            if (this != &ob)
                this->Matrice::operator=(ob);
            return *this;
        }
};

#endif // MATRICE_PATRATICA_H
