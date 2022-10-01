#include<stdio.h>//57
int main(){
    char str[100];
    int i=0;
    printf("Input string ");
    scanf("%s",&str);
    while(str[i]!='\0'){
        i+=1;
    }
    printf("%c",str[i-1]);



    return 0;
}