#include "Matrice_Oarecare.h"
#include <fstream>
#include <cstdlib>
using namespace std;

Matrice_Oarecare::Matrice_Oarecare() : Matrice()
{
    /*
    NrLinii = 0;
    v = NULL;*/
    //ctor
}

void Matrice_Oarecare::Afis_Sum()
{
    int suma = 0;
    int sumadiagonala = 0;
    for (int i = 0; i< this->NrLinii; i++)
        for (int j = 0; j< this->v[i].Get_Dimensiune(); j++)
        {
            suma += (this->v[i]).GetElement(j);
            if( i == j )
                sumadiagonala += (this->v[i]).GetElement(j);
        }
    if( suma - sumadiagonala ==0 ) cout << "Matrice triunghiulara este diagonala.";
    else cout << "Matrice triunghiulara nu este diagonala.";
    cout <<endl;

}
Matrice_Oarecare::~Matrice_Oarecare()
{
    NrLinii = 0;
    delete [] v;
    //dtor
}
