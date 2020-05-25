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
    Matrice *mat;
    try
    {
        Matrice_Oarecare mato;
        mat = &mato;
        mat-> Afis_Sum();
    }
    catch(exception &exp)
    {

    }

    Matrice_Oarecare mato;
    Matrice_Patratica matp;
    f >> mato;
    f >> matp;
    cout << mato << endl;
    cout << matp << endl;
    mat = &mato;
    mat->Afis_Sum();
    mat = &matp;
    mat->Afis_Sum();
    f.close();
    return 0;
}
