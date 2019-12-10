#include<iostream>

using namespace std;

int faktorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*faktorial(n-1);
	}
}

int kombinasi(int n, int r)
{
	if(n<r)
	{
		return 0;
	}
	else if(n>r)
	{
		return faktorial(n)/(faktorial(r)*faktorial(n-r));
	}
}

int main()
{
	int n, r;
	
	cout<<"Masukan bilangan (n): ";
	cin>>n;
	cout<<"Masukan bilangan (r): ";
	cin>>r;
	cout<<"Kombinasi "<<kombinasi(n,r);
}
