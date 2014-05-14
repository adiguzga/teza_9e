/*
    Mutare intr-un alt vector elemente prime.

*/
#include<iostream>
#include<math.h>
using namespace std;
void citire(int &n, int a[100])
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
void mutare_elem(int a[100], int b[100], int n, int &m)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(prim(a[i])==true)
        {
            b[m]=a[i];
            m++;
        }
    }
}
void afisare(int b[100], int m)
{
    cout<<"Noul vector este :(";
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
