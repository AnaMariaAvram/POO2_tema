#include <iostream>
#include "Vector.h"
#include "Matrice_Patratica.h"
#include "Matrice_Oarecare.h"
#include "Matrice.h"
#include <fstream>

using namespace std;
ifstream f("TEMA2.in");
ofstream g("TEMA2.out");


int v[100], nr, LIN;
int main()
{
    /*
    /// clasa VECTOR
    Vector vector1;
    f >> vector1; ///supraincarcarea operatorului >>
    g << vector1 << endl; ///supraincarcarea operatorului <<

    f >> nr;
    for (int i = 0; i < nr ; i++)
        f >> v[i];

    Vector vector2(nr, v); ///constructor de initializare
    Vector vector3(vector2); ///constructor de copiere
    vector3 = vector1; ///supraincarcarea operatorului =
    g << vector2 << endl << vector3 << endl;
    f >> LIN;

    ///Clasa Matrice
    Matrice mat1(LIN, vector2); ///constructor de initializare
    Matrice mat2(mat1), mat3; ///constructor de copiere
    mat2 = mat1; ///supraincarcarea operatorului =
    g << mat2;
    f >> mat3; ///supraincarcarea operatorului >>
    g << mat3; ///supraincarcarea operatorului <<
    */

    /// clasa Matrice_Oarecare
    Matrice_Oarecare mato;
    f >> mato;
    mato.Get_Sum_Mat_Oarecare();
    Matrice_Patratica matp;
    f >> matp;
    matp.Get_Sum_Mat_Patratica();
    return 0;
}
