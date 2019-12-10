#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	char a=1;
	int n, jumlah=0;
	
	cout<<"Masukkan nilai n: ";cin>>n;
	
	for(int a=1; a<=n; a=a+2){
		jumlah +=a;
		if (a !=0){
			cout<<a<<" ";
		} else {
			cout<<"a"<<" = ";
		}
		a=a+2;
	}
	cout<<"\njumlah ="<<jumlah;
	getch();
} 
