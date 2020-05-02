#include "Matrice_Patratica.h"
#include <fstream>
#include <cstdlib>
using namespace std;
Matrice_Patratica::Matrice_Patratica():Matrice()
{
    /*NrLinii = 0;
    v = NULL;*/
    //ctor
}

void Matrice_Patratica::get_sum()
{
    int determinant = 1;
    int suma = 0;
    int sumadiagonala = 0;
    for (int i = 0; i< this->NrLinii; i++ )
        for (int j = 0; j< this->v[i].Get_Dimensiune(); j++)
        {
            suma += (this->v[i]).GetElement(j);
            if( i == j )
                sumadiagonala += (this->v[i]).GetElement(j);
        }
    if( suma - sumadiagonala ==0 )
        cout << "Matrice triunghiulara este diagonala. ";
    else cout << "Matrice triunghiulara nu este diagonala. ";
    for (int i = 0; i< this->NrLinii; i++)
        if(this->v[i].Get_Dimensiune() != this->NrLinii)
        {
            cout << "Matricea nu este patratica. ";
            return;
        }
    if( suma - sumadiagonala ==0 )
        {
            for (int i = 0; i< this->NrLinii; i++)
                determinant = determinant * (this->v[i]).GetElement(i);
            cout << "Matricea este patratica. Valoarea determinatului este: " << determinant << ".";
            return;
        }
    cout << "Matricea este patratica. Valoarea determinatului este: ";
            if(this->NrLinii == 1)
                determinant = (this->v[0]).GetElement(0);
            else if(this->NrLinii == 2)
                determinant = (this->v[0]).GetElement(0)*(this->v[1]).GetElement(1)-(this->v[0]).GetElement(1)*(this->v[1]).GetElement(0);
            else if(this->NrLinii == 3)
                determinant = (this->v[0]).GetElement(0)*(this->v[1]).GetElement(1)*(this->v[2]).GetElement(3)+(this->v[2]).GetElement(0)*(this->v[0]).GetElement(1)*(this->v[1]).GetElement(2)+(this->v[1]).GetElement(0)*(this->v[2]).GetElement(1)*(this->v[0]).GetElement(2)-(this->v[2]).GetElement(0)*(this->v[1]).GetElement(1)*(this->v[0]).GetElement(2)-(this->v[0]).GetElement(0)*(this->v[1]).GetElement(2)*(this->v[2]).GetElement(1)-(this->v[2]).GetElement(2)*(this->v[0]).GetElement(1)*(this->v[1]).GetElement(0);
    cout << determinant << "." ;
}
Matrice_Patratica::~Matrice_Patratica()
{
    NrLinii = 0;
    delete [] v;
    //dtor
}

