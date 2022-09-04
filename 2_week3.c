#include<stdio.h>

int main(){
    int i,j,a;
    printf("input ");
    scanf("%d",&a);
    i=1;
    while(i<=a){
        for(j=1;j<=2*a-1;j++){
            if(j<=2*a-i&&j>=i){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    i+=1;
        
    }
     i=a-1;
    while(i>=1){
         for(j=1;j<=2*a-1;j++){
            if(j<=2*a-i&&j>=i){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    i-=1;
        
    }

    return 0 ;
}