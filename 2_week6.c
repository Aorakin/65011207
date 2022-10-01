#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("input string ");
    scanf("%s",&str);
    int i =strlen(str)-1;
    printf("%c",str[i]);


    return 0 ;
}