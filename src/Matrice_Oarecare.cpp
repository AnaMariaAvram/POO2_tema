#include "Matrice_Oarecare.h"
#include <fstream>
#include <cstdlib>
using namespace std;

Matrice_Oarecare::Matrice_Oarecare() : Matrice()
{
    /*NrLinii = 0;
    v = NULL;*/
    //ctor
}
Matrice_Oarecare::Matrice_Oarecare(int k, Vector x) : Matrice( k, x)
{
    NrLinii = k;
    v = new Vector[NrLinii];
    for (int i = 0; i < k; i++)
         v[i] = x;

}
Matrice_Oarecare::Matrice_Oarecare (const Matrice_Oarecare &tablou) : Matrice(tablou)
{
    NrLinii = tablou.NrLinii;
    v = new Vector[NrLinii];
    for(int i = 0; i < NrLinii; i++)
        v[i] = tablou.v[i];

}
void Matrice_Oarecare::Get_Sum_Mat_Oarecare()
{
    int suma = 0;
    int sumadiagonala = 0;
    for (int i = 0; i< this->NrLinii; i++)
        for (int j = 0; j< this->v[i].Get_dimensiunevector(); j++)
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
