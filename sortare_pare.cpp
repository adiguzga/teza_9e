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
void sortare(int a[100], int n)//Se sorteaza doar elementele pare
{
    int i, j, temp;//in temp (a se citi aux) se va tine temporar valoarea
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]%2==0&&a[j]%2==0&&a[i]>a[j])
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
    int n, a[100];
    citire(n, a);
    sortare(a, n);
    afisare(a, n);
    return 0;//Prietenii stiu de ce.
}
