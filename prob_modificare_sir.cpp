#include<iostream>
#include<math.h>
using namespace std;
void citire(int &n,int a[100])
{
    int i;
    cout<<"n="; cin>>n;
    for(i=0;i<n;i++)
        {cout<<"Element a["<<i<<"]:";
        cin>>a[i];}
}
int prime(int n)
{
    int d;
    if(n<2)
        return 0;
    else
    for(d=2;d<=sqrt(n);d++)
        if(n%d==0)
            return 0;
    return 1;
}
void par_prim(int n,int a[100],int &m,int b[100],int &l,int c[100])
{
    int i;
    m=0; l=0;
    for(i=0;i<n;i++)
        {if(a[i]%2==0)
            b[m++]=a[i];
        if(prime(a[i])==1||a[i]!=4)
            c[l++]=a[i];}
}
void ins(int &n, int a[100], int p)
{
    int i;
    for(i=n-1;i>=p;i--)
        a[i+1]=a[i];
    a[p]=0;
    n++;
}
void inserare(int &n,int a[100])
{
    int i,j,p;
    for(i=0;i<n;i++)
        if(prime(a[i])==1)
        {
            p=i+1;
            ins(n,a,p);
            i++;
        }
}
void rasucire(int n,int a[100])
{
    int i=0,j=n-1,aux;
    while(i<=j)
    {
        aux=a[i];
        a[i]=a[j];
        a[j]=aux;
        i++;
        j--;
    }

}
void afisare(int n, int a[100])
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void mutare(int n, int a[100],int &k,int d[100])
{
    int i,ma=0;
    k=0;
    for(i=0;i<n;i++)
        ma=ma+a[i];
    ma=ma/n;
    for(i=0;i<n;i++)
        if(a[i]>ma)
            d[k++]=a[i];
}
int main ()
{
    int n,m,l,k,a[100],b[100],c[100],d[100];
    citire(n,a);
    par_prim(n,a,m,b,l,c);
    afisare(n,a);
    rasucire(n,a);
    afisare(n,a);
    mutare(n,a,k,d);
    afisare(k,d);
    inserare(n,a);
    afisare(n,a);
    afisare(m,b);
    afisare(l,c);
	return 0;
}
