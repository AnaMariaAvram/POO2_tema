#include <iostream>
#include "Vector.h"
#include "Matrice_Patratica.h"
#include "Matrice_Oarecare.h"
#include "Matrice.h"
#include <fstream>

using namespace std;

int main()
{
    ifstream f("TEMA2.in");
    try
    {
        Matrice_Oarecare mato;
    }
    catch(exception &exp)
    {
        cout<<exp.what()<<'\n';
    }

    Matrice_Oarecare mato;
    Matrice_Patratica matp;
    Matrice *mat;
    f >> mato;
    f >> matp;
    mat = &mato;
    mat->Afis_Sum();
    mat = &matp;
    mat->Afis_Sum();
    f.close();
    return 0;
}
