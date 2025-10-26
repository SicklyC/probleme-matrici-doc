#include <bits/stdc++.h>
//Se dă o matrice cu m linii și n coloane cu elemente numere întregi. Sa se calculeze media aritmetica a  elementelor de pe linii pare.

using namespace std;
int m,n,suma,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i+=2){
        suma=0;
        for(int j=0;j<m;j++){
          suma=suma+a[i][j];
        }
        cout<<suma/m<<endl;
    }
}
