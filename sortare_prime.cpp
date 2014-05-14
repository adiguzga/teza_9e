/*
    Sa se sorteze crescator toate numerele pare.

*/
#include<iostream>
#include<math.h>
using namespace std;
void citire(int a[100], int &n)
{
    cout<<"Introduceti numarul de elemente : "; cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";cin>>a[i];
    }
}
int prim(int n)
{
   int e_prim,div;
    if(n<2||(n%2==0&&n!=2))
        e_prim=0;
    else
        e_prim=1;
        for(div=3;div<=sqrt(n);div=div+2)
            if(n%div==0)
            {
                e_prim=0;
                break;
            }
    if(e_prim==1)
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
            if(prim(a[i])==true&&prim(a[j])==true&&a[i]>a[j])
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
