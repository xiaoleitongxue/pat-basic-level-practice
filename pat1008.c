//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>

int reverse(int start, int end, int *nums){
    int temp;
    while(start<end){
        temp = nums[start];
        nums[start] = nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}

int main(void){
    int N;
    int M;
    scanf("%d %d",&N,&M);
    int nums[N];
    int i;
    char ch;
    while(1){
        scanf("%d",&nums[i++]);
        ch = getchar();
        if(ch=='\n'){
            break;
        }
    }
    if(M>N){
        M=M-N;
    }
    reverse(0,N-M-1,nums);
    reverse(N-M,N-1,nums);
    reverse(0,N-1,nums);

    for(i=0;i<N-1;i++){
        printf("%d ",nums[i]);
    }
    printf("%d",nums[N-1]);
    printf("\n");
}
