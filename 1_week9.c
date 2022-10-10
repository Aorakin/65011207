#include<stdio.h>
int main(){
    int n,square[100][100],sum[7],i=0,result;
    scanf("%d",&n);
    result =(n*(n*n+1))/2;
    while(i<n){
        int j=0;
        while(j<n){
            scanf("%d",&square[i][j]);
             if(i==0){sum[3]+=square[0][j];}
            if(i==1){sum[4]+=square[1][j];}
            if(i==2){sum[5]+=square[2][j];}
            if(i==j){sum[6]+=square[i][j];}
            if(j+1==n-i){sum[7]+=square[i][j];}
            j++;
        }
        sum[0]+=square[i][0];
        sum[1]+=square[i][1];
        sum[2]+=square[i][2];
    i++;
    }
    for(int u=0;u<=7;u++){
        if(sum[u]==result){
            if(u==7){printf("TRUE");}
            continue;
        }
        else if(sum[u]!=result) {
        printf("FALSE ");
        break;}

    }
    return 0;
}