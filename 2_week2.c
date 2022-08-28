#include<stdio.h>
#include<string.h>
int main(){
    int A;
    char word[100];
    printf("Input your word ");
    scanf("%s",word);
    A = strlen(word);
    for(int i=A;i>=0;i--){
    printf("%c",word[i]);
     }


    return 0;
}