#include <ctime>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
double v[100],s;
int n,i;
int main()
{
	srand(time(0));
	cout<<"Nr de elemente: ";
	cin>>n;
	cout<<setprecision(10)<<"\nVectorul este:\n";
	for(i=0;i<n;++i)
	{
		v[i]=rand()/10000.0;
		s+=v[i];
		cout<<v[i]<<" ";
	}
	cout<<"\nMedia este "<<s/n<<"\n\nNr subunitare:\n";
	for(i=0;i<n;++i)
		if(v[i]<1)
			cout<<v[i]<<" ";
	return 0;
}
