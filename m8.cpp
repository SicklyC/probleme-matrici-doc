
#include <bits/stdc++.h>
//Se da o matrice cu m linii si n coloane, cu elemente numere întregi. Sa se afișeze numărul elementelor pozitive, negative si nule de pe o linie data L a matricii.
using namespace std;
int m,n,nule,neg,poz,suma,l,a[100][100];
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
    cin>>l;
    for(int j=0; j<m; j++)
    {
        if(a[l][j]>0)
        {
            poz++;
        }
        else if(a[l][j]<0)
        {
            neg++;
        }
        else
        {
            nule++;
        }
    }
    cout<<"poz:"<<poz<<endl<<"neg:"<<neg<<endl<<"nule:"<<nule;
}
