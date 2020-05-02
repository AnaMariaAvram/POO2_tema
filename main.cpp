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
    Matrice_Oarecare mato;
    f >> mato;
    mato.get_sum();
    Matrice_Patratica matp;
    f >> matp;
    matp.get_sum();
    f.close();
    return 0;
}
