#include<stdio.h>

int main(){

    int n, jumlah = 0;
	
	printf("Masukan nilai n : ");
	
	scanf("%i", &n);
	
    for(int i = 1; i <= n; i++){

        printf("%i", i * 2);

        jumlah += i * 2;

        if(i == n) printf(" = ");

        else printf(" + ");

    }

    printf("%i", jumlah);

    return 0;

}


