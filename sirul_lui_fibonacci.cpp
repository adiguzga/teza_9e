#include<fstream>
#include<cmath>
using namespace std;
ifstream fin("input.in");
ofstream fout("output.out");
void citire(int &n)//Citeste n
{
    fin>>n;
}
void gnr_sir(int a[100], int n, int &n_elem)//Genereaza sirul si memoreaza elementul n
{
    int i=0;
    a[0]=a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        n_elem=a[i];
    }
}
void afisare(int n_elem)//afiseaza
{
    fout<<n_elem;
}
int main()
{
    int n, a[100], n_elem;
    citire(n);
    gnr_sir(a, n, n_elem);
    afisare(n_elem);
    return 0;//Prietenii stiu de ce.
}
