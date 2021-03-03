//
// Created by lilei on 3/3/2021.
//


#include <stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d",&num);
    while(num!=1){
        if(num%2==0){
            num = num/2;
        }
        else{
            num = (3*num + 1)/2;
        }
        count++;
    }
    printf("%d",count);
}