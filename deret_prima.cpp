#include <iostream>
using namespace std;

int main(){
	
	int prima;
	int batas,i,h;
	
	cout<<"Masukkan batas bilangan prima = ";cin>>batas;
	
	for (i=2; i<=batas; i++){
		prima = 1;
		
		for (h = 2; h < i; h++){
			if (i% h == 0)
			prima = 0;
		}
		if (prima == 1)
		cout<<i<<' ';
		
	}
	
	return 0;
}
