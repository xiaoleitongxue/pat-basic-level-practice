//
// Created by lilei on 3/3/2021.
//


#include <stdio.h>
int main(){
    char * figureHan[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    char ch;
    ch = getchar();
    while(ch!='\n'){
        switch(ch){
            case '1':{
                sum+=1;
                break;
            }
            case '2':{
                sum+=2;
                break;
            }
            case '3':{
                sum+=3;
                break;
            }
            case '4':{
                sum+=4;
                break;
            }
            case '5':{
                sum+=5;
                break;
            }
            case '6':{
                sum+=6;
                break;
            }
            case '7':{
                sum+=7;
                break;
            }
            case '8':{
                sum+=8;
                break;
            }
            case '9':{
                sum+=9;
                break;
            }
            default:{
                sum+=0;
                break;
            }
        }
        ch = getchar();
    }

    int result[100];
    int count=0;
    int currentFigure;
    while(sum!=0){
        currentFigure = sum % 10;
        result[count++]=currentFigure;
        sum = sum / 10;
    }

    if(count>1){
        for(int i=count-1;i>0;--i){
            printf("%s ",figureHan[result[i]]);
        }
        printf("%s",figureHan[result[0]]);
    }
    else{
        printf("%s",figureHan[result[0]]);
    }
    return 0;
}