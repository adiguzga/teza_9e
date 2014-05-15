#include<math.h>
#include<iostream>
using namespace std;
void citire(int &n,int a[100])
{
    int i;
    cout<<"n="; cin>>n;
    for(i=0;i<n;i++)
        {cout<<"Element a["<<i<<"]:";
        cin>>a[i];}
}
int cifre(int n)
{
    int uc=n%10,ok=0,cn=n;
    while(cn)
    {
        if(cn%10!=uc)
            return 0;
        cn=cn/10;
    }
    return 1;
}
int cresc(int n)
{
    int uc,ok=0,cn=n;
    while(cn)
    {
        uc=cn%10;
        if(cn/10%10>uc)
            return 0;
        cn=cn/10;
    }
    return 1;
}
int pali(int n)
{
    int in=0,cn=n;
    while(cn)
    {
        in=in*10+cn%10;
        cn=cn/10;
    }
    if(in==n)
        return 1;
    return 0;
}
int invers(int n)
{
    int in=0,cn=n;
    while(cn)
    {
        in=in*10+cn%10;
        cn=cn/10;
    }
    if(in>n)
        return 1;
    return 0;
}
int prime(int n)
{
    int d;
    if(n<2)
        return 0;
    else
    for(d=2;d<sqrt(n);d++)
        if(n%d==0)
            return 0;
    return 1;
}
void numarare(int n, int a[100])
{
    int i,maxloc=0,prim=0,pal=0,cifr=0,cres=0,inv=0;
    for(i=1;i<n-1;i++)
        if(a[i]>a[i-1]&&a[i]>a[i+1])
            maxloc++;
    for(i=0;i<n;i++)
        {if(pali(a[i])==1)
            pal++;
        if(prime(a[i])==1)
            prim++;
        if(cifre(a[i])==1)
            cifr++;
        if(cresc(a[i])==1)
            cres++;
        if(invers(a[i])==1)
            inv++;}
    cout<<endl<<"Maxlocale:"<<maxloc<<endl;
    cout<<"Prime:"<<prim<<endl;
    cout<<"Palindroame:"<<pal<<endl;
    cout<<"Nr. cu aceleasi cifre:"<<cifr<<endl;
    cout<<"Nr. cu cifre crescatoare:"<<cres<<endl;
    cout<<"Nr. mai mici ca inversul lor:"<<inv<<endl;
}
int cmmdc(int a, int b)
{
    int r,ca=a,cb=b;
    r=ca%cb;
    while(r!=0)
    {
        ca=cb;
        cb=r;
        r=ca%cb;
    }
    return cb;
}
void max_cmmdc(int n, int a[100])
{
    int i,j,max=-999999;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(cmmdc(a[i],a[j])>=max)
                max=cmmdc(a[i],a[j]);
    cout<<"Val. maxima a cmmdc din sir este:"<<max<<endl;
}
void lung(int n,int a[100])
{
    //??????????????????????
}
void afisare(int n, int a[100])
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main ()
{
    int a[100],n;
    citire(n,a);
    afisare(n,a);
    numarare(n,a);
    max_cmmdc(n,a);
	return 0;
}
