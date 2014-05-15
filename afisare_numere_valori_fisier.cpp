/*
    Afisati numerele cuprinse intre 2 valori citite de la tastatura.
*/
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
ifstream fin("in.txt");
ofstream fout("out.txt");
int main()
{
    int a,b,n;
    cout<<"Introduceti prima valoare : "; cin>>a;
    cout<<"Introduceti a doua valoare : "; cin>>b;
    fout<<"Numerele cuprinse intre cele doua valori sunt :(";
    while(fin>>n)
    {
        if(n>a&&n<b)
            fout<<n<<",";
    }
    fout<<"\b)";

    return 0;
}
