//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>
#include <string.h>
int main(void){
    int wei[3];
    wei[0]=0;
    wei[1]=0;
    wei[2]=0;
    int number;
    int unused __attribute__((unused));
    unused = scanf("%d",&number);
    int i=2;
    while(number!=0){
        wei[i]= number%10;
        number = number/10;
        --i;
    }

    for(i=0;i<wei[0];i++){
        printf("B");
    }
    for(i=0;i<wei[1];i++){
        printf("S");
    }

    for(i=0;i<wei[2];i++){
        printf("%d",i+1);
    }
    printf("\n");
    return 0;
}