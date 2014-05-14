#include<fstream>
#include<cmath>
using namespace std;
ifstream fin("input.in");
ofstream fout("output.out");
void citire(int &n, int a[100])//Citeste n si elementele sirului
{
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
}
void medie(int a[100], int n, int &ma)//Se calculeaza media
{
    int i, j, S=0;
    for(i=0;i<n;i++)
    {
        S+=a[i];
    }
    ma=S/n;
}
void mutare_elem(int a[100], int b[100], int n, int &m, int ma)//Se muta elementele
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>ma)
        {
            b[m]=a[i];
            m++;
        }
    }
}
void afisare(int b[100], int m)//afiseaza vectorul sortat
{
    for(int i=0;i<m;i++)
    {
        fout<<b[i]<<" ";
    }
}
int main()
{
    int n, a[100], b[100], ma, m=0;
    citire(n, a);
    medie(a, n, ma);
    mutare_elem(a, b, n, m, ma);
    afisare(b, m);
    return 0;//Prietenii stiu de ce.
}
