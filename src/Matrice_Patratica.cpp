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
Matrice_Patratica::Matrice_Patratica(int k, Vector x):Matrice( k, x)
{
    NrLinii = k;
    v = new Vector[NrLinii];
    for (int i = 0; i < k; i++)
         v[i] = x;

}
Matrice_Patratica::Matrice_Patratica (const Matrice_Patratica &tablou): Matrice(tablou)
{
    NrLinii = tablou.NrLinii;
    v = new Vector[NrLinii];
    for(int i = 0; i < NrLinii; i++)
        v[i] = tablou.v[i];

}
void Matrice_Patratica::Get_Sum_Mat_Patratica()
{
    int determinant = 1;
    int suma = 0;
    int sumadiagonala = 0;
    for (int i = 0; i< this->NrLinii; i++ )
        for (int j = 0; j< this->v[i].Get_dimensiunevector(); j++)
        {
            suma += (this->v[i]).GetElement(j);
            if( i == j )
                sumadiagonala += (this->v[i]).GetElement(j);
        }
    if( suma - sumadiagonala ==0 )
        cout << "Matrice triunghiulara este diagonala. ";
    else cout << "Matrice triunghiulara nu este diagonala. ";
    for (int i = 0; i< this->NrLinii; i++)
        if(this->v[i].Get_dimensiunevector() != this->NrLinii)
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

    cout << determinant << "." ;
}
Matrice_Patratica::~Matrice_Patratica()
{
    NrLinii = 0;
    delete [] v;
    //dtor
}

/*main() {
int A[50][50],n,i,j,diag=1,p=1;
while(cout<<"n=",cin>>n,n<=0 || n>50);
for(i=0;i<n;i++)
for(j=0;j<n;j++) {
cout<<"A["<<i+1<<","<<j+1<<"]=";
cin>>A[i][j];
}
cout<<"Se da matricea: "<<endl;
for(i=0;i<n;i++) {
for(j=0;j<n;j++)
cout<<A[i][j]<<" ";
cout<<endl;
}
for(i=0;i<n&&diag;i++)
for(j=0;j<i&&diag;j++)
if(A[i][j])
diag=0;
if(diag) {
for(i=0;i<n;i++)
7
p*=A[i][i];
cout<<"Matricea este triunghiulara. Determinantul este :
"<<p<<endl;
}
else
cout<<"Matricea nu este triunghiulara."<<endl;
*/
