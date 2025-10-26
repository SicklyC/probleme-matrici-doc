
#include <bits/stdc++.h>
//Se dă o matrice cu m linii si n coloane. Sa se afiseze sumele elementelor pe coloane.
using namespace std;
int m,n,suma,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=0; j<m; j++)
    {
        suma=0;
        for(int i=0; i<n; i++)
        {
            suma=suma+a[i][j];
        }
        cout<<suma<<endl;
    }

}

