#include<stdio.h>
int main (){
int result=0;
int a[10];
printf("Enter your number ");
for(int i =0;i<10;i++){
    scanf("%d",&a[i]);
    if(i%2!=0){
        a[i]=-a[i];
    }
    result+=a[i];

}
printf("result %d",result);
    return 0;
}