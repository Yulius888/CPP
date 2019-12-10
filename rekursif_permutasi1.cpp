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

int permutasi(int n, int r)
{
	if(n<r)
	{
		return 0;
	}
	else
	{
		return faktorial(n) / faktorial(n-r);
	}
}

int main()
{
    int n,r;
    
    cout<<"=====Permutasi====="<<endl;
    cout<<" \n Masukkan Nilai n : "; cin>>n;
    cout<<" \n Masukkan Nilai r : "; cin>>r;
    cout<<"\n Permutasinya adalah : "<<permutasi(n,r);
}

