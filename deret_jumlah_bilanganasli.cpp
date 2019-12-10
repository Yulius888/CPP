#include<stdio.h>

int main(){

    int n, jumlah = 0;

    printf("Masukan nilai n : ");

    scanf("%i", &n);

    for(int i = 1; i <= n; i++){

        printf("%i", i);

        if(i != n) printf(" + ");

        jumlah += i;

    }

    printf("\nJumlah : %i", jumlah);

    return 0;

}


