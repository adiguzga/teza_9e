/*
	Cate numere palindroame sunt in sir.
*/
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
void citire(int a[100],int &n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<"a["<<i<<"] = "; cin>>a[i];
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
int main()
{
    int a[100],n,i,contor=0;
    cout<<"Introduceti numarul de elemente : "; cin>>n;
    citire(a,n);
    for(i=0;i<n;i++)
    {
        if(palindrom(a[i])==true)
            contor++;
    }
    cout<<"Sunt "<<contor<<" numere palindroame";

    return 0;
}
