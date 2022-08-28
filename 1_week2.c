#include<stdio.h>
#include<string.h>
int main(){

    char word[100];
    printf("enter a string ");
    scanf("%s",word);
    printf("%s",strrev(word));

    return 0;
}