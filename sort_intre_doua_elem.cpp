#include<fstream>
#include<cmath>
using namespace std;
ifstream fin("input.in");
ofstream fout("output.out");
void citire(int a[100], int &n, int &k, int &l)//Citeste n si elementele sirului si pozitiile k si l
{
    fin>>n;
    fin>>k;
    fin>>l;
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
}
void sortare(int a[100], int n, int k, int l)//Aci sortam vectorul doar intre pozitiile alea
{
    int temp, i, j;
    if(k>l)
    {
        for(i=l;i<=k;i++)
        {
            for(j=i+1;j<=k+1;j++)
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
    }
    else
    {
        for(i=k;i<=l;i++)
        {
            for(j=i+1;j<=l+1;j++)
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
    }
}
void afisare(int a[100], int n)//afiseaza vectorul sortat
{
    for(int i=0;i<n;i++)
    {
        fout<<a[i]<<" ";
    }
}
int main()
{
    int n, a[100], k, l;
    citire(a, n, k, l);
    sortare(a, n, k, l);
    afisare(a, n);
    return 0;//Prietenii stiu de ce.
}
