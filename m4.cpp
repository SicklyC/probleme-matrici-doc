#include <bits/stdc++.h>
//Se dă o matrice cu m linii și n coloane cu elemente numere întregi.  Sa se determine valoarea minima din matrice.
using namespace std;
int m,n,minim=9999999,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
                if(minim>a[i][j])
                    minim=a[i][j];
        }
    }
    cout<<minim<<endl;
}
