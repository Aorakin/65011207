#include<stdio.h>
int main (){
int num [10];
int a=0 ,b=0;
printf("Enter your number ");
for(int i=0;i<10;i++){
scanf("%d",&num[i]);
if(i%2==0){
a+=num[i];}
else{b+=num[i];}
}
printf("%d",a-b);

return 0;
}
