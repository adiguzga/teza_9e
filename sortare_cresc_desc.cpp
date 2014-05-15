/*
    Sortare prima jumatate crescator , a doua jumatate descrescator.
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
void cresc(int a[100],int &n)
{
    int i,j,aux;
    for(i=0;i<n/2-1;i++)
    {
        for(j=1;j<n/2;j++)
        {
            if(a[i]>a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}
void desc(int a[100],int &n)
{
    int i,j,aux;
    for(i=n/2;i<n-1;i++)
    {
        for(j=n/2+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }

}
void afisare(int a[100], int &n)
{
    cout<<"Noul vector este :(";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"\b)";
}
int main()
{
    int a[100], n;
    citire(a,n);
    cresc(a,n);
    desc(a,n);
    afisare(a,n);

	return 0;
}
