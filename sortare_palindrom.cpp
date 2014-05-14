/*
    Sortare numere palindrom.
*/
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
void citire(int a[100], int &n)
{
    cout<<"Introduceti numarul de elemente : "; cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";cin>>a[i];
    }
}
int palindrom(int n)
{
    int invers=0,aux;
    aux=n;
    while(n>0)
    {
        invers=invers*10+(n%10);
        n=n/10;
    }
    if(aux==invers)
        return true;
    return false;
}
void sortare(int a[100], int n)
{
    int i, j, aux;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(palindrom(a[i])==true&&palindrom(a[j])==true&&a[i]>a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}
void afisare(int a[100], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n, a[100];
    citire(a,n);
    sortare(a,n);
    afisare(a,n);
    return 0;
}
