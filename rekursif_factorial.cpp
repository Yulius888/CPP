#include<iostream>

using namespace std;
 
int factorial(int n)
 {
 	if(n==1)
	{
	 	return 1;
 	}
	 else
	{
 		return n*factorial(n-1);
	}
	 
 }
 
 int main()
 {
 	int bil;
 	
 	cout<<"Factorial dengan Rekursif"<<endl;
 	cout<<"========================="<<endl;
 	cout<<endl;
 	cout<<"Masukkan sebuah bilangan : ";cin>>bil;
 	cout<<endl;
 	cout<<"!"<<bil<<" = "<<factorial(bil);
 }
