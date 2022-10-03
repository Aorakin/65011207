#include<stdio.h>
int main(){
    int i =1;
    char str[100];
scanf("%s",str);
while(str[i]!='\0'){
    i++;
}
for(i;i>=0;i--){
    for(int j=0;j<i;j++){
   printf("%c",str[j]);
    }
    printf("\n");
}
    return 0;
}