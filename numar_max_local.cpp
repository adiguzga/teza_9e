/*
	Cate maxime locale sunt.
*/
#include<iostream>
#include<math.h>
using namespace std;
void citire(int a[100],int &n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<"a["<<i<<"] = "; cin>>a[i];
    }
}
int max_local(int a[100],int n)
{
    int i,contor=0;
    for(i=1;i<n-1;i++)
        if(a[i]>a[i-1]&&a[i]>a[i+1])
            contor++;
    cout<<"Sunt "<<contor<<" maxime locale.";
    return contor;
}
int main()
{
    int a[100],n,i;
    cout<<"Introduceti numarul de elemente : "; cin>>n;
    citire(a,n);
    max_local(a,n);



	return 0;
}
