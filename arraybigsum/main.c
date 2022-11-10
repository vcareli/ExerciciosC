#include<stdio.h>
#include<iostream>
using namespace std;


long bigsum(long vetor){
    long soma = 0;
    int r = vetor.size();
    for (int i = 0; i < r, i++) {
        soma += vetor[i];
    }

    return soma;
}

int main(void){

    long number[] = { 1000000001, 1000000002, 1000000003, 1000000004, 1000000005 };
    long total;

    total = bigsum(number);
    printf("%llu", total);


    return 0;
}
