//
// Created by lilei on 3/17/2021.
//

#include <stdio.h>
int main(){
    int M;
    int N;
    scanf("%d %d",&M,&N);
    int count=0;
    int num=2;
    int lie=0;
    while(count<=N){
        int h=0;
        for(int k=2;k<num;k++){
            if(num%k==0){
                h++;
            }
        }
        if(h==0){
            count++;
            if(count>=M && count <=N){
                lie++;
                if(lie<10){
                    if(count==N){
                        printf("%d",num);
                    }
                    else{
                        printf("%d ",num);
                    }

                }
                else{
                    printf("%d",num);
                    printf("\n");
                    lie=0;
                }

            }
        }
        num++;
    }
    return 0;
}