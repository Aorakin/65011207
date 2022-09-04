#include<stdio.h>
int main(){
    int i,j,a;
    printf("input ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=2*a-1;j++){
            if(j<i||j>2*a-i){
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }
    for(i=a-1;i>=1;i--){
        for(j=1;j<=2*a-1;j++){
            if(j<i||j>2*a-i){
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");

    }




    return 0;

}