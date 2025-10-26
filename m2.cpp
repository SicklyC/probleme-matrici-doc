#include <bits/stdc++.h>
//Se dă o matrice a cu n linii și m coloane, cu elemente numere întregi. Afișați elementele pare de pe linii impare si coloane divizibile cu 3.
using namespace std;
int m,n,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(n%2==0&&m%3==0)
          cout<<a[i][j];
        }
    }
}
