#include<stdio.h>
int main(){
    int j,n,sum[8]={0,0,0,0,0,0,0,0},square[100][100],result;
    scanf("%d",&n);
    result=(n*(n*n+1))/2;
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&square[i][j]);
            if(i==0){sum[3]+=square[0][j];}
            if(i==1){sum[4]+=square[1][j];}
            if(i==2){sum[5]+=square[2][j];}
            if(i==j){sum[6]+=square[i][j];}
            if(j+1==n-i){sum[7]+=square[i][j];}
        }
        sum[0]+=square[i][0];
        sum[1]+=square[i][1];
        sum[2]+=square[i][2];
    }
if(sum[0]==sum[1]&&sum[2]==sum[3]&&sum[4]==sum[5]&&sum[0]==sum[2]&&sum[0]==sum[4]&&sum[6]==sum[7]&&sum[0]==sum[6]&&sum[0]==result){
    printf("YES");
}else{ printf("NO");}

    return 0;
}