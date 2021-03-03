//
// Created by lilei on 3/3/2021.
//

#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int A1,A2,A3,A4,A5;
    A1=A2=A3=A4=A5=0;
    int i=0;
    int symbol=1;
    int A4Sum=0;
    int A4Count=0;
    int num;
    int isExit[5]={0,0,0,0,0};
    for(i;i<n;i++){
        scanf("%d",&num);
        switch(num%5){
            case 0:{
                if(num%2==0){
                    A1+=num;
                    isExit[0]++;
                }
                break;
            }
            case 1:{
                A2 = A2 + num * symbol;
                symbol=-symbol;
                isExit[1]++;
                break;
            }
            case 2:{
                A3++;
                isExit[2]++;
                break;
            }
            case 3:{
                A4Sum+=num;
                A4Count++;
                isExit[3]++;
                break;
            }
            case 4:{
                if(num>A5){
                    A5=num;
                }
                isExit[4]++;
                break;
            }
            default:{
                break;
            }
        }
    }

    if(isExit[0]>0){
        printf("%d ",A1);
    }
    else{
        printf("%c ",'N');
    }

    if(isExit[1]>0){
        printf("%d ",A2);
    }
    else{
        printf("%c ",'N');
    }

    if(isExit[2]>0){
        printf("%d ",A3);
    }
    else{
        printf("%c ",'N');
    }

    if(isExit[3]>0){
        float average =(float) A4Sum/A4Count;
        printf("%.1f ",average);
    }
    else{
        printf("%c ",'N');
    }

    if(isExit[4]>0){
        printf("%d",A5);
    }
    else{
        printf("%c",'N');
    }
    return 0;
}