/*
    Cate numere prime sunt intr-un sir.
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
int main()
{
    int a[100],n,i,contor=0;
    cout<<"Introduceti numarul de elemente : "; cin>>n;
    citire(a,n);
    for(i=0;i<n;i++)
    {
        if(prim(a[i])==true)
            contor++;
    }
    cout<<"Sunt "<<contor<<" numere prime";

    return 0;

}
