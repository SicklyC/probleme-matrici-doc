#include <bits/stdc++.h>
//Se dă o matrice cu m linii și n coloane, cu elemente numere întregi. Sa se afiseze liniile pe care se afla valoarea maxima din matrice.
using namespace std;
int m,n,maxim=-1,a[100][100];
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
                if(maxim<a[i][j])
                    maxim=a[i][j];
        }
    }
    cout<<maxim<<endl;
}
