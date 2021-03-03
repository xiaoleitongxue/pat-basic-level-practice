//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>

int main(void){
    int unused __attribute__((unused));
    int n;
    unused = scanf("%d",&n);
    long A,B,C;
    int i;
    for(i=0;i<n;i++){
        unused = scanf("%ld %ld %ld",&A,&B,&C);
        if(A+B>C){
            printf("Case #%d: true\n",i+1);
        }
        else{
            printf("Case #%d: false\n",i+1);
        }
    }
    return 0;
}