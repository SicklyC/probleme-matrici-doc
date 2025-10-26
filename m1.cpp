#include <bits/stdc++.h>
//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Determinați suma valorilor din matrice. Restricții: 1 ≤ m,n ≤ 100.

using namespace std;
int m,n,suma,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>a[i][j];
          suma=suma+a[i][j];
        }
    }
    cout<<suma;
}
