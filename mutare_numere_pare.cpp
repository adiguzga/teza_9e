/*
    Mutarea intr-un alt vector a elementelor pare.
*/
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
void citire(int &n, int a[100])
{
    cout<<"Introduceti numarul de elemente : "; cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";cin>>a[i];
    }
}
void mutare_elem(int a[100], int b[100], int n, int &m)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[m]=a[i];
            m++;
        }
    }
}
void afisare(int b[100], int m)
{
    cout<<"Noul vecto este :(";
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<",";
    }
    cout<<"\b)";
}
int main()
{
    int n, a[100], b[100],m=0;
    citire(n,a);
    mutare_elem(a,b,n,m);
    afisare(b,m);

	return 0;
}
