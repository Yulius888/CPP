#include<cstdlib>
#include<iostream>
 
using namespace std;


int faktorial (int n)
{
    int fak;
    	if (n<=1)
    	{
    		fak=1;
    	}
    	else
    	{
    		fak=n*faktorial(n-1);
    	}
    return (fak);
}
int main()
{
    int n,r, permutasi;
    cout<<"Permutasi"<<endl;
    cout<<" \n Masukkan Nilai n : "; cin>>n;
    cout<<" \n Masukkan Nilai r : "; cin>>r;
    permutasi=faktorial (n)/faktorial(n-r);
    cout<<"\n Permutasinya adalah : "<<permutasi;
}

