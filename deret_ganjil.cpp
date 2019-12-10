#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int ganjil, n;
	
	cout<<"Masukkan angka : ";cin>>n;
	
	for (ganjil=1; ganjil<=n; ganjil++)
	
	if(ganjil %2 == 1){
		cout<<ganjil<<" ";
	}
}
