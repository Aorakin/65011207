#include<stdio.h>
int Isprime(int x);
int main(){
    int check=0,A;
    printf("input ");

    while(check!=1){
        scanf("%d",&A);
        check=Isprime(A);
        if (check == 1){
        printf("%d is prime number ",A);
        }
    }
    
    return 0 ;
}
int Isprime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0&&x!=i){
            return 0;
        }
        else return 1;
    }

}