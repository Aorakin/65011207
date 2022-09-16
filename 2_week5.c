#include<stdio.h>
#include<math.h>
int Isprime(int x);
int main(){
    int num,check=0;
    while(check==0){
        scanf("%d",&num);
        check=Isprime(num); }
    printf("%d is prime number ",num);

    return 0;
}
int Isprime (int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){return 0;}
        else return 1;
    }
}