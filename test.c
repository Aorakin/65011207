#include<stdio.h>
int main(){
    int a,i=1,j=1;
    printf("input your number ");
    scanf("%d",&a);
    while(i<=a){
        if(j<=a){
            printf("*");
            j=j+1;
        }
        else {
            printf("\n");
            j=1;
            i+=1;
        }
        
    }
    

    return 0;
}