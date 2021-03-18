//
// Created by lilei on 3/17/2021.
//
#include <stdio.h>
int main(){
    int N;
    int a=0;
    scanf("%d",&N);
    int sushu[N];
    int sushuduiCount=0;
    int sushuLength=0;
    int num=2;
    int j=0;
    while(num<=N){
        for(int i=2;i<num;i++){
            if(num%i==0){
                a++;  // 素数个数加1
            }
        }
        if(a==0){
            sushu[j++]=num;
            sushuLength++;
        }
        a=0;
        num++;
    }

    j=0;
    while(j<sushuLength-1){
        if(sushu[j+1]-sushu[j]==2){
            sushuduiCount++;
        }
        j++;
    }
    printf("%d",sushuduiCount);
    return 0;
}